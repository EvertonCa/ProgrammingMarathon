#include<stdio.h>
#include <iostream>

using namespace std;

// Number of vertices in the graph
#define V 101

/* Define Infinite as a large enough value. This value will be used
  for vertices not connected to each other */
#define INF 99999

int dist[V][V];

// Solves the all-pairs shortest path problem using Floyd Warshall algorithm
void floydWarshall (int graph[][V])
{
    /* dist[][] will be the output matrix that will finally have the shortest
      distances between every pair of vertices */
    int i, j, k;

    /* Initialize the solution matrix same as input graph matrix. Or
       we can say the initial values of shortest distances are based
       on shortest paths considering no intermediate vertex. */
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    /* Add all vertices one by one to the set of intermediate vertices.
      ---> Before start of a iteration, we have shortest distances between all
      pairs of vertices such that the shortest distances consider only the
      vertices in set {0, 1, 2, .. k-1} as intermediate vertices.
      ----> After the end of a iteration, vertex no. k is added to the set of
      intermediate vertices and the set becomes {0, 1, 2, .. k} */
    for (k = 0; k < V; k++)
    {
        // Pick all vertices as source one by one
        for (i = 0; i < V; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < V; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));

            }
        }
    }
}

/* A utility function to print solution */
void printSolution(int origem, int destino)
{
    cout << dist[origem][destino] << endl;
}

int main()
{
    int vertices, arestas, instancia = 1;
    while(cin >> vertices >> arestas)
    {
        if(vertices == 0 && arestas == 0)
        {
            break;
        }

        int grafo[V][V];

        for (int k = 0; k < V; ++k)
        {
            for (int i = 0; i < V; ++i)
            {
                grafo[i][k] = INF;
            }
        }
        for (int l = 0; l < V; ++l)
        {
            grafo[l][l] = 0;
        }

        for (int i = 0; i < arestas; ++i)
        {
            int verticeInicial, verticeFinal, altura;

            cin >> verticeInicial >> verticeFinal >> altura;

            grafo[verticeInicial][verticeFinal] = altura;
            grafo[verticeFinal][verticeInicial] = altura;
        }

        int queries;

        cin >> queries;

        for (int j = 0; j < queries; ++j)
        {
            int origem, destino;

            cin >> origem >> destino;

            if(j==0)
            {
                cout << "Instancia " << instancia << endl;
            }

            if(origem == destino)
                cout << 0 << endl;
            else
            {
                floydWarshall(grafo);
                printSolution(origem, destino);
            }
        }
        instancia++;
        cout << endl;
    }

    return 0;
}