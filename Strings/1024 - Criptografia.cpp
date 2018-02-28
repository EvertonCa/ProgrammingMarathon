#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string palavra, invertida;
    int quant, i, j, k, l, caracteres, n;

    cin>>quant;
    cin.ignore();
    for(i=0; i<quant; i++)
    {
        getline(cin,palavra);
        caracteres=palavra.size();

        for(j=0; j<caracteres; j++)
        {
            if((palavra[j]>=97 && palavra[j]<=122) || (palavra[j]>=65 && palavra[j]<=90))
            {
                palavra[j] = palavra[j] + 3;
            }

        }

        for(l=0; l<caracteres; l++)
        {
            n = caracteres - l - 1;
            invertida += palavra[n];
        }

        for(k=(caracteres/2); k<caracteres; k++)
        {
            invertida[k] = invertida[k] - 1;
        }

        cout<<invertida<<endl;
        palavra.clear();
        invertida.clear();


    }

    return 0;
}
