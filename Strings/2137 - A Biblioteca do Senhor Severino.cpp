#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int quant;
    string codigo;
    list<string> lista;

    while (cin>>quant)
    {
        if(quant == EOF)
            break;

        for (int i = 0; i < quant; ++i)
        {
            cin>>codigo;
            lista.push_back(codigo);
        }

        lista.sort();

        for (int j = 0; j < quant; ++j)
        {
            cout<<lista.front()<<endl;
            lista.pop_front();
        }
    }
}
