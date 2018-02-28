#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string palavra, aux;
    int i, j, quant, pessoas, cont;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        cin>>pessoas;

        cont = 1;

        for(j=0; j<pessoas; j++)
        {
            cin>>palavra;

            if(palavra == aux)
            {
                cont++;
            }
            else
                aux = palavra;
        }

        if(cont==pessoas)
            cout<<palavra<<endl;
        else
            cout<<"ingles"<<endl;

        palavra.clear();
        aux.clear();
    }

}
