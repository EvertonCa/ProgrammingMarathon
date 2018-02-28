#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string p1, p2, palavra;
    int i, j, k,  quant, avanco, caracteres;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        cin>>palavra;
        cin>>avanco;

        caracteres=palavra.size();

        for(j=0; j<caracteres; j++)
        {
            if(palavra[j]<(65+avanco))
            {
                palavra[j] = palavra[j] + 26 - avanco;
            }

            else
            {
                palavra[j] = palavra[j] - avanco;
            }
        }

        cout<<palavra<<endl;
        palavra.clear();
    }
}
