/***** ALGORITMO CONVEX-HULL *************************************************/
//    Dado um grupo de pontos, calcula o menor polígono convexo que abrange a todos os mesmos.
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

class Ponto {
public:
    float x;
    float y;
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

    // Ordena os pontos
    // Obs: Conforme função que sobrecarrega o operador "<"
    sort(P.begin(), P.end());

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
        Ponto buffer;
        float somatoriaDistancias = 0;

        for (int i = 0; i < pontos; ++i)
        {
            cin>>buffer.x>>buffer.y;
            vetorDePontos.push_back(buffer);
        }

        vetorConvex = convex_hull(vetorDePontos);

        while(vetorConvex.size() > 1)
        {
            float distanciaX, distanciaY;
            distanciaX = vetorConvex[0].x - vetorConvex[1].x;
            distanciaY = vetorConvex[0].y - vetorConvex[1].y;

            somatoriaDistancias = somatoriaDistancias + (sqrt( (distanciaX*distanciaX) + (distanciaY*distanciaY) ));
            vetorConvex.erase(vetorConvex.begin());
        }

        printf("Tera que comprar uma fita de tamanho %.2f.\n",somatoriaDistancias);

        cin>>pontos;
    }

    return 0;
}