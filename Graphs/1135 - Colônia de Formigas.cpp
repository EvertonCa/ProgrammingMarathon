#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main()
{
    int formigueiros;

    while(scanf("%d",&formigueiros))
    {
        if(formigueiros == 0)
            break;

        long long int pesos[formigueiros];
        int predecessores[formigueiros];
        int altura[formigueiros];

        pesos[0] = 0;
        predecessores[0] = 0;
        altura[0] = 0;

        for (int i = 1; i < formigueiros; ++i)
        {
            int anterior;
            long long int peso;

            scanf("%d %lld",&anterior, &peso);

            predecessores[i] = anterior;
            pesos[i] = peso + pesos[anterior];
            altura[i] = altura[anterior] + 1;
        }

        int testes;

        scanf("%d",&testes);

        for (int j = 0; j < testes; ++j)
        {
            int origem, destino, lca, a, b;
            long long int distancia;

            scanf("%d %d", &origem, &destino);

            a = origem;
            b = destino;

            while(a!=b)
            {
                if(altura[a]>altura[b])
                {
                    a=predecessores[a];
                }
                else
                {
                    b=predecessores[b];
                }
            }
            
            lca = a;

            distancia = pesos[origem] + pesos[destino] - (2*pesos[lca]);

            printf("%lld", distancia);

            if(j < testes-1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}