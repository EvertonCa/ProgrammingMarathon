#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string palavra, one="one", two="two", three="three";
    int quant, i, j, valor, cont1, cont2;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        cin>>palavra;
        valor=palavra.size();

        if(valor==3)
        {
            if((palavra[0]=='o' && palavra[2]=='e') || (palavra[1]=='n' && palavra[2]=='e')||(palavra[0]=='o' && palavra[1]=='n'))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }

    return 0;
}
