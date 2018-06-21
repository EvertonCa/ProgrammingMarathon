#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <string.h> // memset
#include <list>
#define LIMPO 0
#define INFECTANDO 1
#define INFECTADO 2
using namespace std;

vector<vector<int>> conexoes;

class Spam
{
public:
    int originador, limite1, limite2;
    string a1, a2, a3;

public:
    Spam(int originador, int t1, int t2, string a1, string a2, string a3)
    {
        this->originador = originador;
        this->limite1 = t1;
        this->limite2 = t2;
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }
};

vector <Spam> vetorDeSpams;

class Pessoa
{
public:
    string nome;
    int indice;
    vector<string> vetorDeSpamsPegos;
    vector<int> vetorVerificadorDeSpamPego;

public:
    Pessoa(string nome, int indice, int quantidadeDeSpams)
    {
        this->nome = nome;
        this->indice = indice;
        for (int i = 0; i < quantidadeDeSpams; ++i)
        {
            vetorVerificadorDeSpamPego.push_back(LIMPO);
        }
        inicializaSpam(quantidadeDeSpams);
    }

    void adicionaSpam(string spam, int indiceDoSpam)
    {
        vetorDeSpamsPegos[indiceDoSpam] = spam;
    }

    void inicializaSpam(int quantidadeDeSpams)
    {
        for (int i = 0; i < quantidadeDeSpams; ++i)
        {
            vetorDeSpamsPegos.push_back(vetorDeSpams[i].a1);
        }
    }

    void infectando(int indice)
    {
        vetorVerificadorDeSpamPego[indice] = INFECTANDO;
    }
    void infectado(int indice)
    {
        vetorVerificadorDeSpamPego[indice] = INFECTADO;
    }

    void mostrarInfeccoes()
    {
        cout << nome << ": ";
        for (int i = 0; i < vetorDeSpamsPegos.size(); ++i)
        {
            cout << vetorDeSpamsPegos[i] << " ";
        }
        cout << endl;
    }
};

vector <Pessoa> vetorDePessoas;

void infecta(int indiceDaPessoa, int indiceDoSpam)
{
    int quantidadeDeEmails;

    quantidadeDeEmails = conexoes[indiceDaPessoa].size();

    if(vetorDePessoas[indiceDaPessoa].vetorVerificadorDeSpamPego[indiceDoSpam] == LIMPO)
    {
        if(quantidadeDeEmails < vetorDeSpams[indiceDoSpam].limite1)
        {
            vetorDePessoas[indiceDaPessoa].adicionaSpam(vetorDeSpams[indiceDoSpam].a1, indiceDoSpam);
        }
        else if(quantidadeDeEmails >= vetorDeSpams[indiceDoSpam].limite1 && quantidadeDeEmails < vetorDeSpams[indiceDoSpam].limite2)
        {
            vetorDePessoas[indiceDaPessoa].adicionaSpam(vetorDeSpams[indiceDoSpam].a2, indiceDoSpam);
        }
        else
        {
            vetorDePessoas[indiceDaPessoa].adicionaSpam(vetorDeSpams[indiceDoSpam].a3, indiceDoSpam);
        }

        vetorDePessoas[indiceDaPessoa].infectando(indiceDoSpam);
    }
}

void infectar_E_Espalhar(int originario, int indiceDoSpam)
{
    infecta(originario, indiceDoSpam);

    for (int i = 0; i < conexoes[originario].size(); ++i)
    {
        if(vetorDePessoas[conexoes[originario][i]].vetorVerificadorDeSpamPego[indiceDoSpam] == LIMPO )
        {
            infectar_E_Espalhar(conexoes[originario][i], indiceDoSpam);
        }

    }

    vetorDePessoas[originario].infectado(indiceDoSpam);
}

int main()
{
    while(true)
    {
        int numeroDePessoas;

        cin >> numeroDePessoas;

        if(numeroDePessoas == 0)
            break;

        vector<vector<int>> temp(numeroDePessoas);
        conexoes = temp;

        for (int i = 0; i < numeroDePessoas; ++i)
        {
            int pessoa;
            cin >> pessoa;
            while(pessoa != 0)
            {
                conexoes[i].push_back(pessoa-1);
                cin >> pessoa;
            }
        }

        int originadorDoSpam, t1, t2;
        string a1, a2, a3;

        cin >> originadorDoSpam;

        while(originadorDoSpam != 0)
        {
            cin >> t1 >> t2 >> a1 >> a2 >> a3;
            Spam temp(originadorDoSpam, t1, t2, a1, a2, a3);
            vetorDeSpams.push_back(temp);

            cin >> originadorDoSpam;
        }

        for (int j = 0; j < numeroDePessoas; ++j)
        {
            string nomeTemp;
            cin >> nomeTemp;
            Pessoa temp(nomeTemp, j, vetorDeSpams.size());
            vetorDePessoas.push_back(temp);
        }

        for (int j = 0; j < vetorDeSpams.size(); ++j)
        {
            infectar_E_Espalhar(vetorDeSpams[j].originador - 1, j);
        }

        for (int k = 0; k < vetorDePessoas.size(); ++k)
        {
            vetorDePessoas[k].mostrarInfeccoes();
        }

        conexoes.clear();
        vetorDeSpams.clear();
        vetorDePessoas.clear();

    }
}