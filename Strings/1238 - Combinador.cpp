#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string p1, p2, palavra;
    int i, j, k,  quant, caracteres1, caracteres2;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        cin>>p1>>p2;
        caracteres1=p1.size();
        caracteres2=p2.size();

        if(caracteres1>caracteres2)
        {
            for(j=0; j<caracteres2; j++)
            {
                palavra += p1[j];
                palavra += p2[j];
            }

            for(k=caracteres2; k<caracteres1; k++)
            {
                palavra += p1[k];
            }
        }

        else if(caracteres2>caracteres1)
        {
            for(j=0; j<caracteres1; j++)
            {
                palavra += p1[j];
                palavra += p2[j];
            }

            for(k=caracteres1; k<caracteres2; k++)
            {
                palavra += p2[k];
            }
        }

        else
        {
            for(j=0; j<caracteres1; j++)
            {
                palavra += p1[j];
                palavra += p2[j];
            }
        }

        cout<<palavra<<endl;
        palavra.clear();
    }
}
