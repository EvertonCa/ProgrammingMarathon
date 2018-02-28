#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string numero1, numero2, teste;
    int i, quant, caracteres1, caracteres2;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        cin>>numero1>>numero2;

        caracteres1=numero1.size();
        caracteres2=numero2.size();

        if(caracteres2>caracteres1)
            cout<<"nao encaixa"<<endl;

        else
        {
            teste += numero1.substr((caracteres1-caracteres2),caracteres2);

            if(teste.compare(numero2) == 0)
                cout<<"encaixa"<<endl;
            else
                cout<<"nao encaixa"<<endl;
        }

        teste.clear();
    }
}
