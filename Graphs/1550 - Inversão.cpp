#include<iostream>
#include<vector>
#include<queue>
#include <stack>

using namespace std;

vector< vector<int> > g; // Lista de Adjacência

int soma(int valor)
{
    int somado;

    somado = valor + 1;

    return somado;
}

int inverter(int valor)
{
    int invertido, cont;
    char buffer[6], buffer2[6];
    stack <char> pilha;

    cont=sprintf(buffer,"%d",valor);

    while (buffer[cont-1] == '0')
    {
        cont = cont-1;
    }

    for (int i = 0; i < cont; ++i)
    {
        pilha.push(buffer[i]);
    }

    for (int i = 0; i < cont; ++i)
    {
        buffer2[i] = pilha.top();
        pilha.pop();
    }

    invertido = atoi(buffer2);

    return invertido;
}

// Algoritmo calcula a menor distancia para alcançar todos os vertices do grafo partindo de um vertice inicial.
int bfs(int inicio, int fim)
{
    vector<int> d(g.size(), -1); // Vetor de distância minima para alcançar o vertice.
    vector<bool> cor(g.size(), false); // Define se cada vertice ja foi encontrado ou não.

    int distancia;
    bool teste = true;
    queue<int> Q; // Fila que define a ordem de acesso aos vertices.

    // Inicialização
    cor[inicio] = true; // Define a cor do vértice raiz como acessado.
    d[inicio] = 0; // Define a distância da raiz para ela mesma como 0.

    Q.push(inicio); // Enfileira a raiz.

    // Enquanto a fila não estiver vazia.
    while((!Q.empty()) && teste){
        int u = Q.front(); // Define u como sendo o vértice na frente na fila.

        Q.pop(); // Desenfileira.

        // Para todo vertice adjacente à "u".
        for(int i = 0; i < g[u].size(); i++)
        {
            // Se o vertice adjacente à "u" não tiver sido encontrado.
            if(cor[g[u][i]] == false)
            {
                Q.push(g[u][i]); // Enfileira o vertice adjacente.
                cor[g[u][i]] = true; // Define o vertice adjacente como encontrado.
                d[g[u][i]] = d[u]+1; // Define a distancia minima para alcançar o vertice.

            }
            if(g[u][i] == fim)
            {
                distancia = d[g[u][i]];
                cout<<distancia<<endl;
                teste = false;
            }

        }
    }

    // *** OBS: O RETORNO DA FUNÇÃO PODE SER ALTERADO CONFORME A NECESSIDADE DO PROBLEMA. ***
    return distancia; // Retorna o vetor peso.
}

int main()
{
    int tentativas, somado, invertido, inicial, final;

    cin>>tentativas;

    g.resize(10001);

    for (int j = 1; j < 10000; ++j)
    {
        somado = soma(j);
        invertido = inverter(j);
        g[j].push_back(somado);
        g[j].push_back(invertido);
    }

    for (int i = 0; i < tentativas; ++i)
    {
        cin>>inicial>>final;

        int dist = bfs(inicial, final);

    }

}
