#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main(void)
{
    int testes, i, quant, j, numero, quant2, soma;

    scanf("%d",&testes);
    for(i=0; i<testes; i++)
    {
        vector<int> vetor;
        vector<int> vetor2;
        vector<int>::iterator it;
        scanf("%d",&quant);

        for(j=0; j<quant; j++)
        {
            scanf("%d",&numero);
            vetor.push_back(numero);
            vetor2.push_back(numero);
        }
        sort(vetor.begin(), vetor.end());
        quant2 = vetor.size();
        soma = 0;

        for(j=0; j<quant2; j++)
        {
            if(vetor.at((quant2-1-j)) == vetor2.at(j))
                soma++;

        }

        printf("%d\n",soma);

    }

}
