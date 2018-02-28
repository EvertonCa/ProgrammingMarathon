#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string palavra, invertida;
    int j, caracteres, cont=0;

    while(getline(cin,palavra))
    {
        cont=0;
        caracteres=palavra.size();

        for(j=0; j<caracteres; j++)
        {
            if(palavra[j] != ' ')
            {
                cont=cont+1;

                if(cont%2== 0 && (palavra[j]>=65 && palavra[j]<=90))
                    palavra[j] = palavra[j] + 32;

                if(cont%2 != 0 && palavra[j]>=97 && palavra[j]<=122)
                    palavra[j] = palavra[j] - 32;
            }

        }

        cout<<palavra<<endl;
    }
}
