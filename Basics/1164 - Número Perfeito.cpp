#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int quant, numero, soma;

    cin>>quant;

    for (int i = 0; i < quant; ++i)
    {
        cin>>numero;

        soma=0;

        for (int j = 1; j < numero; ++j)
        {
            if(numero%j == 0)
                soma = soma + j;
        }

        if(soma == numero)
            cout<<numero<<" eh perfeito"<<endl;

        else
            cout<<numero<<" nao eh perfeito"<<endl;
    }
}
