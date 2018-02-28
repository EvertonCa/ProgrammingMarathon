#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string frase, primeirasLetras;
    int i, j, tentativas, caracteres;

    cin>>tentativas;
    cin.ignore();

    for(j=0; j<tentativas; j++)
    {
        getline(cin,frase);
        primeirasLetras.clear();
        caracteres=frase.size();
        if(frase[0] != ' ')
            primeirasLetras += frase[0];

        for(i=1; i<caracteres; i++)
        {
            if(frase[i-1] == ' ' && frase[i] != ' ')
                primeirasLetras += frase[i];
        }

        cout<<primeirasLetras<<endl;

    }
}
