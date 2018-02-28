#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int quant, numero, soma;

    while(cin>>numero)
    {
        if(numero == 0)
            break;

        for (int i = 1; i < numero; ++i)
        {
            cout<<i<<" ";
        }

        cout<<numero<<endl;
    }
}
