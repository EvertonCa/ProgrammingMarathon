#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int cartas, aux, tamanho, saida, aux1;

    list<int> aquisicao;

    while (cin>>cartas)
    {
        if(cartas == 0)
            break;

        aquisicao.push_back(cartas);
    }

    aux1 = aquisicao.size();

    for (int i = 0; i < aux1; ++i)
    {
        list<int> lista;
        list<int> descartados;

        cartas = aquisicao.front();
        aquisicao.pop_front();

        if(cartas == 1)
        {
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
        }

        else
        {
            for (int i = 0; i < cartas; ++i)
            {
                lista.push_back(i+1);
            }

            while (lista.size() > 1)
            {
                aux = lista.front();
                lista.pop_front();
                descartados.push_front(aux);
                aux = lista.front();
                lista.pop_front();
                lista.push_back(aux);
            }

            tamanho = descartados.size();

            printf("Discarded cards: ");

            for (int j = 0; j < tamanho; ++j)
            {
                saida = descartados.back();
                descartados.pop_back();
                if(j==(tamanho-1))
                    printf("%i\n",saida);
                else
                    printf("%i, ",saida);
            }

            saida = lista.front();

            printf("Remaining card: %i\n",saida);
        }
    }
}
