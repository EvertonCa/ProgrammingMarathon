#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<list>

using namespace std;

#define PRETO 0 // Descendentes já estão pretos ou não tem descendentes.
#define CINZA 1 // Descoberto.
#define BRANCO 2 // Não descoberto.


int *cor;
bool darEspaco = false;

list<string> listaInfixa;
list<string>::iterator it1;

vector< vector<int> > g;

using namespace std;

string converter(int N)
{
    string letra;
    map<int, string> mapa;
    map<int, string>::iterator it;

    mapa.insert(pair<int, string>(-1, "-"));
    mapa.insert(pair<int, string>(0, "A"));
    mapa.insert(pair<int, string>(1, "B"));
    mapa.insert(pair<int, string>(2, "C"));
    mapa.insert(pair<int, string>(3, "D"));
    mapa.insert(pair<int, string>(4, "E"));
    mapa.insert(pair<int, string>(5, "F"));
    mapa.insert(pair<int, string>(6, "G"));
    mapa.insert(pair<int, string>(7, "H"));
    mapa.insert(pair<int, string>(8, "I"));
    mapa.insert(pair<int, string>(9, "J"));
    mapa.insert(pair<int, string>(10, "K"));
    mapa.insert(pair<int, string>(11, "L"));
    mapa.insert(pair<int, string>(12, "M"));
    mapa.insert(pair<int, string>(13, "N"));
    mapa.insert(pair<int, string>(14, "O"));
    mapa.insert(pair<int, string>(15, "P"));
    mapa.insert(pair<int, string>(16, "Q"));
    mapa.insert(pair<int, string>(17, "R"));
    mapa.insert(pair<int, string>(18, "S"));
    mapa.insert(pair<int, string>(19, "T"));
    mapa.insert(pair<int, string>(20, "U"));
    mapa.insert(pair<int, string>(21, "V"));
    mapa.insert(pair<int, string>(22, "W"));
    mapa.insert(pair<int, string>(23, "X"));
    mapa.insert(pair<int, string>(24, "Y"));
    mapa.insert(pair<int, string>(25, "Z"));
    mapa.insert(pair<int, string>(26, "a"));
    mapa.insert(pair<int, string>(27, "b"));
    mapa.insert(pair<int, string>(28, "c"));
    mapa.insert(pair<int, string>(29, "d"));
    mapa.insert(pair<int, string>(30, "e"));
    mapa.insert(pair<int, string>(31, "f"));
    mapa.insert(pair<int, string>(32, "g"));
    mapa.insert(pair<int, string>(33, "h"));
    mapa.insert(pair<int, string>(34, "i"));
    mapa.insert(pair<int, string>(35, "j"));
    mapa.insert(pair<int, string>(36, "k"));
    mapa.insert(pair<int, string>(37, "l"));
    mapa.insert(pair<int, string>(38, "m"));
    mapa.insert(pair<int, string>(39, "n"));
    mapa.insert(pair<int, string>(40, "o"));
    mapa.insert(pair<int, string>(41, "p"));
    mapa.insert(pair<int, string>(42, "q"));
    mapa.insert(pair<int, string>(43, "r"));
    mapa.insert(pair<int, string>(44, "s"));
    mapa.insert(pair<int, string>(45, "t"));
    mapa.insert(pair<int, string>(46, "u"));
    mapa.insert(pair<int, string>(47, "v"));
    mapa.insert(pair<int, string>(48, "w"));
    mapa.insert(pair<int, string>(49, "x"));
    mapa.insert(pair<int, string>(50, "y"));
    mapa.insert(pair<int, string>(51, "z"));

    it = mapa.find(N);
    letra = it->second;

    return letra;
}

void DFS_visit_prefixo(int vA)
{
    string letra;
    cor[vA] = CINZA;

    for(int i = 0; i <= 1; i++)
    {
        if(cor[g[vA][i]] == BRANCO && g[vA][i] != (-1))
        {
            letra = converter(g[vA][i]);
            cout<<" "<<letra;
            DFS_visit_prefixo(g[vA][i]);
        }
    }

    cor[vA] = PRETO;
}

void DFSprefixo(int verticeInicial)
{
    // Alocação dinâmica
    cor = new int[52];

    int vA;
    string letra;

    for(vA=0; vA < 52; vA++)
    {

        cor[vA] = BRANCO;
    }

    letra = converter(verticeInicial);
    cout<<letra;

    DFS_visit_prefixo(verticeInicial);
}

void DFS_visit_posfixo(int vA)
{
    string letra;
    cor[vA] = CINZA;

    for(int i = 0; i <= 1; i++)
    {
        if(cor[g[vA][i]] == BRANCO && g[vA][i] != (-1))
        {
            DFS_visit_posfixo(g[vA][i]);
        }
    }

    cor[vA] = PRETO;
    letra = converter(vA);
    if(!darEspaco)
    {
        cout<<letra;
        darEspaco = true;
    }
    else
        cout<<" "<<letra;
}

void DFSposfixo(int verticeInicial)
{
    // Alocação dinâmica
    cor = new int[52];
    darEspaco = false;

    int vA;
    string letra;

    for(vA=0; vA < 52; vA++)
    {

        cor[vA] = BRANCO;
    }

    DFS_visit_posfixo(verticeInicial);
}


void inserir(int M, int verticeInicial)
{
    int atual = verticeInicial;
    bool continua = true;

    while (continua)
    {
        if((M > atual) && g[atual][1] != (-1))
        {
            atual = g[atual][1];
        }

        if((M < atual) && g[atual][0] != (-1))
        {
            atual = g[atual][0];
        }

        if((M > atual) && g[atual][1] == (-1))
        {
            g[atual][1] = M;
            continua = false;
        }

        if((M < atual) && g[atual][0] == (-1))
        {
            g[atual][0] = M;
            continua = false;
        }
    }

}

void pesquisar(int M, int verticeInicial)
{
    int atual = verticeInicial;
    bool continua = true;
    bool achou = false;
    string letra;

    while (continua && !achou)
    {
        if(M == atual)
        {
            achou = true;
            letra = converter(M);
            cout<<letra<<" existe"<<endl;
        }

        if((M > atual) && g[atual][1] != (-1))
        {
            atual = g[atual][1];
        }

        if((M < atual) && g[atual][0] != (-1))
        {
            atual = g[atual][0];
        }

        if((M > atual) && g[atual][1] == (M))
        {
            achou = true;
            letra = converter(M);
            cout<<letra<<" existe"<<endl;
        }

        if((M < atual) && g[atual][0] == (M))
        {
            achou = true;
            letra = converter(M);
            cout<<letra<<" existe"<<endl;
        }

        if((M > atual) && g[atual][1] == (-1))
        {
            continua = false;
            letra = converter(M);
            cout<<letra<<" nao existe"<<endl;
        }

        if((M < atual) && g[atual][0] == (-1))
        {
            continua = false;
            letra = converter(M);
            cout<<letra<<" nao existe"<<endl;
        }

    }
}

void infixa()
{
    int espacos, contador=0;
    listaInfixa.sort();
    espacos = listaInfixa.size();

    for (it1 = listaInfixa.begin(); it1 != listaInfixa.end(); it1++)
    {
        cout<<*it1;
        contador++;

        if(contador<espacos)
            cout<<" ";
    }

}

void prefixa(int verticeInicial)
{
    DFSprefixo(verticeInicial);
}

void posfixa(int verticeInicial)
{
    DFSposfixo(verticeInicial);
}

void exibir()
{
    string letra1, letra2, letra3;

    for (int i = 0; i < 52; ++i)
    {
        letra1 = converter(i);
        letra2 = converter(g[i][0]);
        letra3 = converter(g[i][1]);
        cout<<"Nó "<< letra1 << " ligado com "<< letra2 << " & "<< letra3 <<endl;
    }
}

int main()
{
    int testes, Mnumerico, verticeInicial, quant, posicao;
    char N, vertice2;
    string entrada, N2, M;
    bool inicial = false;

    map<string, int> mapa;
    map<string, int>::iterator it;

    mapa.insert(pair<string,int>("A",0));
    mapa.insert(pair<string,int>("B",1));
    mapa.insert(pair<string,int>("C",2));
    mapa.insert(pair<string,int>("D",3));
    mapa.insert(pair<string,int>("E",4));
    mapa.insert(pair<string,int>("F",5));
    mapa.insert(pair<string,int>("G",6));
    mapa.insert(pair<string,int>("H",7));
    mapa.insert(pair<string,int>("I",8));
    mapa.insert(pair<string,int>("J",9));
    mapa.insert(pair<string,int>("K",10));
    mapa.insert(pair<string,int>("L",11));
    mapa.insert(pair<string,int>("M",12));
    mapa.insert(pair<string,int>("N",13));
    mapa.insert(pair<string,int>("O",14));
    mapa.insert(pair<string,int>("P",15));
    mapa.insert(pair<string,int>("Q",16));
    mapa.insert(pair<string,int>("R",17));
    mapa.insert(pair<string,int>("S",18));
    mapa.insert(pair<string,int>("T",19));
    mapa.insert(pair<string,int>("U",20));
    mapa.insert(pair<string,int>("V",21));
    mapa.insert(pair<string,int>("W",22));
    mapa.insert(pair<string,int>("X",23));
    mapa.insert(pair<string,int>("Y",24));
    mapa.insert(pair<string,int>("Z",25));
    mapa.insert(pair<string,int>("a",26));
    mapa.insert(pair<string,int>("b",27));
    mapa.insert(pair<string,int>("c",28));
    mapa.insert(pair<string,int>("d",29));
    mapa.insert(pair<string,int>("e",30));
    mapa.insert(pair<string,int>("f",31));
    mapa.insert(pair<string,int>("g",32));
    mapa.insert(pair<string,int>("h",33));
    mapa.insert(pair<string,int>("i",34));
    mapa.insert(pair<string,int>("j",35));
    mapa.insert(pair<string,int>("k",36));
    mapa.insert(pair<string,int>("l",37));
    mapa.insert(pair<string,int>("m",38));
    mapa.insert(pair<string,int>("n",39));
    mapa.insert(pair<string,int>("o",40));
    mapa.insert(pair<string,int>("p",41));
    mapa.insert(pair<string,int>("q",42));
    mapa.insert(pair<string,int>("r",43));
    mapa.insert(pair<string,int>("s",44));
    mapa.insert(pair<string,int>("t",45));
    mapa.insert(pair<string,int>("u",46));
    mapa.insert(pair<string,int>("v",47));
    mapa.insert(pair<string,int>("w",48));
    mapa.insert(pair<string,int>("x",49));
    mapa.insert(pair<string,int>("y",50));
    mapa.insert(pair<string,int>("z",51));

    g.resize(52);

    for (int i = 0; i < 52; ++i)
    {
        g[i].push_back(-1);
        g[i].push_back(-1);
    }

    cin>>N>>M;

    cin.ignore();

    it = mapa.find(M);
    verticeInicial = it->second;

    listaInfixa.push_back(M);

    while(getline(cin,entrada))
    {
        if(entrada != "INFIXA" && entrada != "PREFIXA" && entrada != "POSFIXA" && entrada != "EXIBIR")
        {
            posicao=entrada.find(" ");
            N2=entrada.substr(0,posicao);
            M=entrada.substr(posicao+1);

            it = mapa.find(M);
            Mnumerico = it->second;

            if(N2 == "I")
            {
                listaInfixa.push_back(M);

                if(!inicial)
                {
                    if(Mnumerico > verticeInicial)
                        g[verticeInicial][1] = Mnumerico;

                    else
                        g[verticeInicial][0] = Mnumerico;

                    inicial = true;
                }
                else
                {
                    inserir(Mnumerico, verticeInicial);
                }
            }

            else if (N2 == "P")
            {
                pesquisar(Mnumerico, verticeInicial);
            }
        }

        else
        {

            if(entrada == "INFIXA")
            {
                infixa();
                cout<<endl;
            }

            else if(entrada == "POSFIXA")
            {
                posfixa(verticeInicial);
                cout<<endl;
            }

            else if(entrada == "PREFIXA")
            {
                prefixa(verticeInicial);
                cout<<endl;
            }

            else if(entrada == "EXIBIR")
            {
                exibir();
                cout<<endl;
            }
        }
    }
}
