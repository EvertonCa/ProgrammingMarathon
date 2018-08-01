#include <iostream>
#include <list>
#include <queue>
#define INFINITO 0
#define ORFAO -1

using namespace std;

class Grafo
{
private:
    int V; // número de vértices
    list<pair<int, double> > *adj; // ponteiro para um array contendo as listas de adjacências

public:

    // construtor
    Grafo(int V)
    {
        this->V = V; // atribui o número de vértices

        /*
            cria as listas onde cada lista é uma lista de pairs
            onde cada pair é formado pelo vértice destino e o custo
        */
        adj = new list<pair<int, double> >[V];
    }

    // adiciona uma aresta ao grafo de v1 à v2
    void addAresta(int v1, int v2, double custo)
    {
        adj[v1].push_back(make_pair(v2, custo));
    }

    // algoritmo de Dijkstra
    double dijkstra(int orig, int dest)
    {
        // vetor de distâncias
        double dist[V];

        int pais[V];

        /*
           vetor de visitados serve para caso o vértice já tenha sido
           expandido (visitado), não expandir mais
        */
        int visitados[V];

        // fila de prioridades de pair (distancia, vértice)
        priority_queue < pair<double, int>, vector<pair<double, int> >, greater<pair<double, int> > > pq;

        // inicia o vetor de distâncias e visitados
        for(int i = 0; i < V; i++)
        {
            dist[i] = INFINITO;
            visitados[i] = false;
            pais[i] = ORFAO;
        }

        // a distância de orig para orig é 0
        dist[orig] = 1;

        // insere na fila
        pq.push(make_pair(dist[orig], orig));

        // loop do algoritmo
        while(!pq.empty())
        {
            pair<double, int> p = pq.top(); // extrai o pair do topo
            int u = p.second; // obtém o vértice do pair
            pq.pop(); // remove da fila

            // verifica se o vértice não foi expandido
            //if(visitados[u] == false)
            {
                // marca como visitado
                visitados[u] = true;

                list<pair<int, double> >::iterator it;

                // percorre os vértices "v" adjacentes de "u"
                for(it = adj[u].begin(); it != adj[u].end(); it++)
                {
                    // obtém o vértice adjacente e o custo da aresta
                    int v = it->first;
                    double custo_aresta = it->second;

                    // relaxamento (u, v)
                    if(dist[v] < (dist[u] * custo_aresta))
                    {
                        // atualiza a distância de "v" e insere na fila
                        dist[v] = dist[u] * custo_aresta;
                        //cout << "v = " << v << " e u = " << u << " com dist = " << dist[v] << endl;
                        pq.push(make_pair(dist[v], v));
                        pais[v] = u;
                    }
                }
            }
        }

        // retorna a distância mínima até o destino
        return dist[dest];
    }
};

int main()
{
    while(true)
    {
        int vertices, arestas;

        cin >> vertices;

        if(vertices == 0)
        {
            break;
        }

        cin >> arestas;

        Grafo g(vertices+1);

        for (int i = 0; i < arestas; ++i)
        {
            int inicio, fim, probabilidade;

            cin >> inicio >> fim >> probabilidade;

            g.addAresta(inicio, fim, probabilidade*0.01);
            g.addAresta(fim, inicio, probabilidade*0.01);
        }

        //cout << g.dijkstra(1, vertices)*100 << endl;
        printf("%.6f percent\n", g.dijkstra(1, vertices)*100);

    }

    return 0;
}