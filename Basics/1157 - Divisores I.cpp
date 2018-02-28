#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int numero;

    cin>>numero;

    for (int j = 1; j <= numero; ++j)
    {
        if(numero%j == 0)
            cout<<j<<endl;
    }
}
