#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    int quant, i, j, k, errado, cont, cont2;
    string expressao, palavra, caractere, teste;


    while(cin>>quant)
    {
        cont = 0;
        caractere.clear();
        getchar();
        list<string> lista;
        list<char> lista2;

        for(i=0; i<quant; i++)
        {
            getline(cin,expressao);
            lista.push_back(expressao);
        }

        lista.sort();

        palavra = lista.front();
        lista.pop_front();
        for(i=0; i<palavra.size(); i++)
        {
            lista2.push_back(palavra[i]);
        }

        for(j=1; j<quant; j++)
        {
            palavra = lista.front();

            for(i=0; i<palavra.size(); i++)
            {
                caractere += lista2.front();
                lista2.pop_front();

                if(palavra[i] == caractere[i])
                {
                    cont++;
                }
                else
                {
                    break;
                }
            }

            caractere.clear();
            lista2.clear();

            for(i=0; i<palavra.size(); i++)
            {
                lista2.push_back(palavra[i]);
            }
            lista.pop_front();

        }

        cout<<cont<<endl;

    }
}



