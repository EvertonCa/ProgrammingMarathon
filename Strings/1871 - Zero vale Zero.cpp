#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    int i, M, N, soma, quantidade;
    string valor;
    cin>>M>>N;

    while(M!=0 && N!=0)
    {
        string palavra;
        stringstream valor1;
        soma = M+N;

        valor1<<soma;
        valor = valor1.str();

        quantidade = valor.length();

        for(i=0; i<quantidade; i++)
        {
            if(valor[i] != '0')
            {
                palavra+=valor[i];
            }
        }

        cout<<palavra<<endl;

        cin>>M>>N;
    }
    system("PAUSE");
    return 0;
}

