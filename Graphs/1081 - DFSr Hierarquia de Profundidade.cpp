#include <cstdlib>
#include <iostream>
#include <vector>
#include <list>


#define INF -1 // Não descoberto (desconexo).
#define NUL -2 // Orfão (raiz).
#define PRETO 0 // Descendentes já estão pretos ou não tem descendentes.
#define CINZA 1 // Descoberto.
#define BRANCO 2 // Não descoberto.


int *cor;
int *predescessor;
int *descoberta; // Tempo de descoberta
int *termino; // Tempo de término
int tempo; // "Relógio"
int espaco; //"Variavel de controle de espaços"

using namespace std;

vector<int> *g;

void DFS_visit2(int vA)
{
    int vB;
    vector<int>::iterator it;
    cor[vA] = CINZA; // Pinta de cinza o vértice que está sendo avaliado no momento, o que significa que ele acaba de ser descoberto.
    tempo++; // O tempo passa, uma vez que a chamada desta função representa o percorrimento de uma aresta (afastando-se da raiz).
    descoberta[vA] = tempo; // Guarda o tempo em que o vértice foi descoberto. Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela primeira vez.

    for(it = g[vA].begin(); it!=g[vA].end(); it++) // Varre o vector, passando por todos os vértices adjacentes ao vértice u.
    {
        vB = *it; // Recebe o valor para que o iterador está apontando

        if(cor[vB] == BRANCO) // Se o vértice(vB) adjacente àquele que está sendo avaliado(vA) ainda não tiver sido descoberto (branco).
        {

            predescessor[vB] = vA; // O predecessor do vértice adjacente se torna o vértice que está sendo avaliado pela função(vA).
            for (int i = 0; i < espaco; ++i)
            {
                cout<<"  ";
            }
            cout<<"  "<<vA<<"-"<<vB<<" pathR(G,"<<vB<<")"<<endl;
            espaco++;
            DFS_visit2(vB); // A função é chamada, recursivamente, para avaliar o vértice adjacente.
        }
        else if(cor[vB] == CINZA || cor[vB] == PRETO)
        {
            for (int i = 0; i < espaco; ++i)
            {
                cout<<"  ";
            }
            cout<<"  "<<vA<<"-"<<vB<<endl;
        }
    }

    espaco = 1;

    cor[vA] = PRETO; // Pinta de preto o vértice que está sendo avaliado pela função, já que todos os vértices descendentes dele já foram completamente avaliados (e também pintados de preto).
    termino[vA] = tempo; // Guarda o tempo em que todos os vértices descendentes daquele que está sendo avaliado (vA) são completamente avaliados (e também pintados de preto). Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela segunda vez.
    tempo++; // O tempo passa, uma vez que o fim desta função representa o percorrimento de uma aresta (aproximando-se da raiz).
}

void DFS_visit(int vA)
{
    int vB;
    vector<int>::iterator it;
    cor[vA] = CINZA; // Pinta de cinza o vértice que está sendo avaliado no momento, o que significa que ele acaba de ser descoberto.
    tempo++; // O tempo passa, uma vez que a chamada desta função representa o percorrimento de uma aresta (afastando-se da raiz).
    descoberta[vA] = tempo; // Guarda o tempo em que o vértice foi descoberto. Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela primeira vez.

    for(it = g[vA].begin(); it!=g[vA].end(); it++) // Varre o vector, passando por todos os vértices adjacentes ao vértice u.
    {
        espaco = 0;
        vB = *it; // Recebe o valor para que o iterador está apontando
        if(cor[vB] == BRANCO) // Se o vértice(vB) adjacente àquele que está sendo avaliado(vA) ainda não tiver sido descoberto (branco).
        {

            predescessor[vB] = vA; // O predecessor do vértice adjacente se torna o vértice que está sendo avaliado pela função(vA).
            for (int i = 0; i < espaco; ++i)
            {
                cout<<"  ";
            }
            cout<<"  "<<vA<<"-"<<vB<<" pathR(G,"<<vB<<")"<<endl;
            espaco++;
            DFS_visit2(vB); // A função é chamada, recursivamente, para avaliar o vértice adjacente.
        }
        else if(cor[vB] == CINZA || cor[vB] == PRETO)
        {
            for (int i = 0; i < espaco; ++i)
            {
                cout<<"  ";
            }
            cout<<"  "<<vA<<"-"<<vB<<endl;
            espaco++;
        }
    }

    if(g[vA].size()>0)
        cout<<endl;

    espaco = 0;

    cor[vA] = PRETO; // Pinta de preto o vértice que está sendo avaliado pela função, já que todos os vértices descendentes dele já foram completamente avaliados (e também pintados de preto).
    termino[vA] = tempo; // Guarda o tempo em que todos os vértices descendentes daquele que está sendo avaliado (vA) são completamente avaliados (e também pintados de preto). Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vértice pela segunda vez.
    tempo++; // O tempo passa, uma vez que o fim desta função representa o percorrimento de uma aresta (aproximando-se da raiz).
}


void DFS(int numeroDeVertices)
{
    // Alocação dinâmica
    cor = new int[numeroDeVertices];
    predescessor = new int[numeroDeVertices];
    descoberta = new int[numeroDeVertices];
    termino = new int[numeroDeVertices];

    int vA;

    for(vA=0; vA < numeroDeVertices; vA++)
    { // Coloca os valores iniciais em todas as posições dos vetores cor, descoberta e predecessor.

        cor[vA] = BRANCO;
        descoberta[vA] = INF;
        predescessor[vA] = NUL;
    }

    tempo = -1; // Inicia tempo como -1 pois, como a função DFS_visit o incrementa em seu inicio, o valor deste será 0 na execução da função para o primeiro vértice (raiz).

    for(int i=0; i < numeroDeVertices; i++)
    {
        espaco = 0;
        if(cor[i]==BRANCO)
        {
            DFS_visit(i); // Chama uma segunda função, que será utilizada recursivamente, enviando o vértice raiz como parâmetro.
        }

    }
}


int main()
{
    int testes;

    cin>>testes;

    for (int i = 0; i < testes; ++i)
    {
        int N,M, aux, tamanho;
        cin>>N>>M;
        g = new vector<int> [N+1];
        list<int> lista;

        int x,y;

        for(int j=0;j<M;j++)
        {
            cin>>x>>y;
            g[x].push_back(y);
        }

        cout<<"Caso "<<i+1<<":"<<endl;

        vector<int>::iterator it;

        for (int j = 0; j < N; ++j)
        {
            for(it = g[j].begin(); it!=g[j].end(); it++)
            {
                lista.push_back(*it);
            }
            lista.sort();
            g[j].clear();

            tamanho = lista.size();

            for (int k = 0; k < tamanho; ++k)
            {
                aux = lista.front();
                g[j].push_back(aux);
                lista.pop_front();
            }
        }

        DFS(N+1); //primeiro parâmetro = tamanho do grafo; segundo parâmetro = vértice inicial
    }
}
