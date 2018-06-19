#include<iostream>

using namespace std;

bool testa(string a, string b){
    bool achou = false;
    int indice = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == b[indice])
        {
            indice++;
        }
    }

    if(indice == b.size())
        achou = true;

    return achou;
}

int main()
{
    int quantidade;

    cin >> quantidade;

    for (int i = 0; i < quantidade; ++i)
    {
        string comparador;
        int testes;

        cin >> comparador;
        cin >> testes;

        for (int j = 0; j < testes; ++j)
        {
            string comparado;
            cin >> comparado;
            bool achei;

            achei = testa(comparador, comparado);

            if (achei)
            {
                cout << "Yes"<<endl;
            } else
            {
                cout << "No" << endl;
            }
        }

    }

}
