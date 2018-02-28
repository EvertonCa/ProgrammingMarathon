#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <vector>


using namespace std;

int main(void)
{
    int testes, i, quant, j, numero;

    scanf("%d",&testes);
    for(i=0; i<testes; i++)
    {
        vector<int> vetor;
        vector<int>::iterator it;
        scanf("%d",&quant);

        for(j=0; j<quant; j++)
        {
            scanf("%d",&numero);
            vetor.push_back(numero);
        }
        sort(vetor.begin(), vetor.end());

        for(it=vetor.begin(); it!=vetor.end(); it++)
        {
            numero = *it;
            if(it+1 != vetor.end())
                printf("%d ",numero);
            else
                printf("%d",numero);
        }

        printf("\n");

    }

}
