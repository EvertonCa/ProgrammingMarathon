/***** ALGORITMO CONVEX-HULL *************************************************/
//    Dado um grupo de pontos, calcula o menor polígono convexo que abrange a todos os mesmos.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Ponto {
public:
    int x;
    int y;
};

bool operator <(const Ponto &p1, const Ponto &p2) {
    return p1.x < p2.x || (p1.x == p2.x && p1.y < p2.y);
}

// Função que auxilia a construção das bordas superior e inferior.
// Verifica a "curva" da ligação entre dois pontos consecutivos em x, o retorno tem o seguinte comportamento:
//    - > 0 caso ocorra uma "curva" para esquerda;
//    - < 0 caso ocorra uma "curva" para a direita;
//    - == 0 caso os pontos sejam coolineares.
int verCurva(const Ponto &O, const Ponto &A, const Ponto &B)
{
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// Retorna a lista de pontos que representam o convex hull em ordem antí-horária.
// Obs: O último ponto da lista retornada é o mesmo que o primeiro.
vector<Ponto> convex_hull(vector<Ponto> P)
{
    int n = P.size(), k = 0;
    vector<Ponto> H(2*n);

    // Constrói a borda superior do convex hull
    for (int i = 0; i < n; i++) {
        while (k >= 2 && verCurva(H[k-2], H[k-1], P[i]) < 0) k--;
        H[k++] = P[i];
    }

    // Constrói a borda inferior do convex hull
    for (int i = n-2, t = k+1; i >= 0; i--) {
        while (k >= t && verCurva(H[k-2], H[k-1], P[i]) < 0) k--;
        H[k++] = P[i];
    }

    H.resize(k);
    return H;
}

int main()
{
    int pontos;

    cin>>pontos;

    while(pontos != 0)
    {
        vector <Ponto> vetorDePontos;
        vector <Ponto> vetorConvex;
        vector <Ponto> vetorAux;
        vector <Ponto>:: iterator it;
        vector <Ponto>:: iterator it2;
        Ponto buffer, buffer2;
        int contador=0;

        for (int i = 0; i < pontos; ++i)
        {
            cin>>buffer.x>>buffer.y;
            vetorDePontos.push_back(buffer);
        }

        sort(vetorDePontos.begin(), vetorDePontos.end());
        vetorAux = vetorDePontos;

        while (!vetorAux.empty())
        {
            vetorConvex = convex_hull(vetorAux);

            for(it=vetorConvex.begin(); it!=vetorConvex.end(); it++)
            {
                buffer=*it;
                for(it2=vetorAux.begin(); it2!=vetorAux.end(); it2++)
                {
                    buffer2=*it2;
                    if(buffer.x == buffer2.x && buffer.y == buffer2.y)
                    {
                        vetorAux.erase(it2);
                        break;
                    }

                }
            }

            /*for(it=vetorConvex.begin(); it!=vetorConvex.end(); it++)
            {
                buffer=*it;
                cout<<buffer.x<<" "<<buffer.y<<endl;
            }*/
            contador++;
        }

        if(contador % 2 ==0)
        {
            cout<<"Do not take this onion to the lab!"<<endl;
        }
        else
            cout<<"Take this onion to the lab!"<<endl;

        cin>>pontos;
    }

    return 0;
}