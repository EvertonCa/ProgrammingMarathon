#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string primeiraPalavra, segundaPalavra, palavra;
    int quant, i, posicao, j, passos;

    cin>>quant;
    cin.ignore();

    for(i=0; i<quant; i++)
    {
        getline(cin,palavra);
        posicao=palavra.find(" ");
        primeiraPalavra=palavra.substr(0,posicao);
        segundaPalavra=palavra.substr(posicao+1);
        passos=0;

        for(j=0; j<posicao; j++)
        {
            if(primeiraPalavra[j]>segundaPalavra[j])
            {
                passos = passos + segundaPalavra[j] - primeiraPalavra[j] + 26;
            }
            else if(primeiraPalavra[j]<segundaPalavra[j])
            {
                passos = passos + segundaPalavra[j] - primeiraPalavra[j];
            }
        }

        cout<<passos<<endl;
    }

    return 0;
}
