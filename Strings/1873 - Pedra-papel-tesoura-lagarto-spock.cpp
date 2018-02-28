#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string rajesh, sheldon, palavra;
    int quant, i, posicao;

    cin>>quant;
    cin.ignore();

    for(i=0; i<quant; i++)
    {
        getline(cin,palavra);
        posicao=palavra.find(" ");
        rajesh=palavra.substr(0,posicao);
        sheldon=palavra.substr(posicao+1);

        if(rajesh=="tesoura")
        {
            if(sheldon=="papel")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="pedra")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="tesoura")
            {
                cout<<"empate"<<endl;
            }
            else if(sheldon=="lagarto")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="spock")
            {
                cout<<"sheldon"<<endl;
            }
        }
        else if(rajesh=="pedra")
        {
            if(sheldon=="papel")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="pedra")
            {
                cout<<"empate"<<endl;
            }
            else if(sheldon=="tesoura")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="lagarto")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="spock")
            {
                cout<<"sheldon"<<endl;
            }
        }
        if(rajesh=="papel")
        {
            if(sheldon=="papel")
            {
                cout<<"empate"<<endl;
            }
            else if(sheldon=="pedra")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="tesoura")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="lagarto")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="spock")
            {
                cout<<"rajesh"<<endl;
            }
        }
        if(rajesh=="lagarto")
        {
            if(sheldon=="papel")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="pedra")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="tesoura")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="lagarto")
            {
                cout<<"empate"<<endl;
            }
            else if(sheldon=="spock")
            {
                cout<<"rajesh"<<endl;
            }
        }
        if(rajesh=="spock")
        {
            if(sheldon=="papel")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="pedra")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="tesoura")
            {
                cout<<"rajesh"<<endl;
            }
            else if(sheldon=="lagarto")
            {
                cout<<"sheldon"<<endl;
            }
            else if(sheldon=="spock")
            {
                cout<<"empate"<<endl;
            }
        }

    }

    return 0;
}
