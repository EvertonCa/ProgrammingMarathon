#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    string palavra, aux;
    float precoAux, soma;
    int i, j, k, l, quant, quant2, quant3, quantidade;

    cin>>quant;
    cout << fixed << setprecision(2);
    for(i=0; i<quant; i++)
    {
        cin>>quant2;

        map<string, float> mapa;
        map<string, float>::iterator it;

        for (j=0; j<quant2; j++)
        {

            cin>>aux>>precoAux;

            mapa.insert(pair<string,float>(aux,precoAux));
        }
        cin>>quant3;
        soma=0;

        for(j=0; j<quant3; j++)
        {
            cin>>aux>>quantidade;

            it = mapa.find(aux);

            soma = soma + (quantidade * it->second);
        }

        cout<< "R$ " << soma <<endl;
    }
}
