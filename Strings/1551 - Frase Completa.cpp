#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string frase, aux, foundMaiuscula, foundMinuscula;
    int i, j, n, quant, pessoas, cont;

    cin>>quant;
    cin.ignore();

    for(i=0; i<quant; i++)
    {
        getline(cin,frase);

        cont = 0;

        for(j=0; j<26; j++)
        {
            size_t foundMinuscula = frase.find(97 + j);

            if(foundMinuscula != string::npos)
            {
                cont++;
            }
        }


        if(cont == 26)
            cout<<"frase completa"<<endl;
        else if(cont<26 && cont>=13)
            cout<<"frase quase completa"<<endl;
        else
            cout<<"frase mal elaborada"<<endl;

    }
}
