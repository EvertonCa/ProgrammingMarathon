#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main(void)
{
    int testes, i, quant, j, numero, quant2, soma, x, y, teste, aux;

    while (scanf("%d",&testes) != EOF)
    {
        vector<int> vetor;
        vector<int> vetor2;
        vector<int>::iterator it;

        for(i=0; i<testes; i++)
        {
            scanf("%d %d",&x,&y);
            for(j=x; j<=y; j++)
            {
                vetor.push_back(j);
            }
        }
        sort(vetor.begin(), vetor.end());

        scanf("%d",&teste);
        i=0;

        for(it=vetor.begin(); it!=vetor.end(); it++)
        {
            aux = *it;
            if(aux == teste)
                vetor2.push_back(i);
            i++;
        }

        if(vetor2.empty())
            cout<<teste<<" not found"<<endl;
        else
            cout<<teste<<" found from "<<vetor2.front()<<" to "<<vetor2.back()<<endl;

    }

}
