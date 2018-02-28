#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int i, quant, numero, aux;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        aux=0;
        cin>>numero;

        for (int j = 1; j <= numero; ++j)
        {
            if(numero%j == 0)
                aux++;
        }

        if(aux <= 2)
            cout<<numero<<" eh primo"<<endl;
        else
            cout<<numero<<" nao eh primo"<<endl;
    }
}
