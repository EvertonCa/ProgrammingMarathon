#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int i=0;
    float media, idade, soma=0;

    cout<<fixed<<setprecision(2);

    while (cin>>idade)
    {
        if(idade <= 0)
            break;

        i++;

        soma = soma + idade;
    }

    media = soma/i;
    cout<<media<<endl;
}
