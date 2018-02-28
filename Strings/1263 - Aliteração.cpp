#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string frase, primeirasLetras;
    int i, j, caracteres, cont, aux;

    while(getline(cin,frase))
    {
        primeirasLetras.clear();
        cont=0;
        j=0;
        aux=0;
        caracteres=frase.size();
        if(frase[0] != ' ')
            primeirasLetras += frase[0];

        for(i=1; i<caracteres; i++)
        {
            if(frase[i-1] == ' ')
                primeirasLetras += frase[i];
        }

        while(primeirasLetras[j] != 0)
        {
            if((primeirasLetras[j] == primeirasLetras[j+1]) || (primeirasLetras[j] == primeirasLetras[j+1] + 32) || (primeirasLetras[j] == primeirasLetras[j+1] - 32))
            {
                if(aux==0)
                {
                    cont++;
                    aux++;
                }

            }

            if((primeirasLetras[j] != primeirasLetras[j+1]) && (primeirasLetras[j] != primeirasLetras[j+1] + 32) && (primeirasLetras[j] != primeirasLetras[j+1] - 32))
                aux=0;

            j++;
        }

        cout<<cont<<endl;

    }

}
