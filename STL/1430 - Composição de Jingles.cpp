#include <iomanip>
#include <iostream>
#include <map>
#include <list>

using namespace std;

int main(void)
{
    string musica, aux;
    float soma2, soma;
    int i, j, x, y;

    map<char, float> mapa;
    map<char, float>::iterator it;

    mapa.insert(pair<char,float>('W',1));
    mapa.insert(pair<char,float>('H',(1/2.0)));
    mapa.insert(pair<char,float>('Q',(1/4.0)));
    mapa.insert(pair<char,float>('E',(1/8.0)));
    mapa.insert(pair<char,float>('S',(1/16.0)));
    mapa.insert(pair<char,float>('T',(1/32.0)));
    mapa.insert(pair<char,float>('X',(1/64.0)));

    while(getline(cin,musica))
    {
        if(musica == "*")
            break;

        list<string> lista;
        x=0;
        for(i=0; i<musica.size(); i++)
        {
            if(musica[i] != '/')
            {
                aux += musica[i];
                x = 1;
            }
            if(musica[i] == '/' && x == 1)
            {
                lista.push_back(aux);
                aux.clear();
                x = 0;
            }
        }

        aux.clear();
        soma2 = 0;
        y = lista.size();

        for(i=0; i<y; i++)
        {
            aux = lista.front();
            lista.pop_front();
            soma = 0;

            for(j=0; j<aux.size(); j++)
            {
                it= mapa.find(aux[j]);
                soma = soma + it->second;
            }

            if(soma == 1)
            {
                soma2++;
            }
        }

        cout<<soma2<<endl;
        aux.clear();
        soma2 = 0;
        soma = 0;
    }
}
