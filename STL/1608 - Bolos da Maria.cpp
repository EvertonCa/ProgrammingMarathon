#include <iomanip>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
    int t, dinheiro, ingredientes, bolos, precoIngrediente, quantIngredientes, indice, quant, aux, preco, quantBolos, melhorQuant;

    cin>>t;

    for (int i = 0; i < t; ++i)
    {
        cin>>dinheiro>>ingredientes>>bolos;
        vector<int> vetorPrecoIngredientes;
        vector<int> vetorCustoBolo;
        list <int> listaQuantosBolos;

        for (int j = 0; j < ingredientes; ++j)
        {
            scanf("%i",&precoIngrediente);
            vetorPrecoIngredientes.push_back(precoIngrediente);
        }

        for (int k = 0; k < bolos; ++k)
        {
            scanf("%i",&quantIngredientes);

            preco = 0;

            for (int j = 0; j < quantIngredientes; ++j)
            {
                scanf("%i %i",&indice,&quant);

                aux = vetorPrecoIngredientes.at(indice);
                preco = preco + (aux * quant);

            }

            vetorCustoBolo.push_back(preco);
        }

        for (int l = 0; l < bolos; ++l)
        {
            quantBolos = dinheiro / vetorCustoBolo.at(l);
            listaQuantosBolos.push_back(quantBolos);
        }

        listaQuantosBolos.sort();

        melhorQuant = listaQuantosBolos.back();

        cout<<melhorQuant<<endl;
    }
}
