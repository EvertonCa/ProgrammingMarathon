#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string rastro;
    int i, processos, contR, ciclos;

    while(cin>>rastro)
    {
        cin>>processos;
        contR=0;
        ciclos=0;
        i=0;

        while(rastro[i] != 0)
        {
            while(contR<processos && rastro[i] != 0)
            {
                if(rastro[i] == 'R')
                    contR++;
                else
                {
                    if(contR != 0)
                        ciclos++;
                    contR=0;
                    ciclos++;
                }

                if(contR == processos)
                {
                    ciclos++;
                    contR=0;
                }

                i++;
            }
        }
        if(contR != 0)
            ciclos++;

        cout<<ciclos<<endl;

    }

}
