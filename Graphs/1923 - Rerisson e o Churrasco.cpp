#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<list>

using namespace std;

vector< vector<int> > g; // Lista de Adjacência

// Algoritmo calcula a menor distancia para alcançar todos os vertices do grafo partindo de um vertice inicial.
list<int> bfs(int inicio, int dist){
    //para os 3 vetores a seguir, cada posição do vetor representa um vertice do grafo.
    vector<int> d(g.size(), -1); // Vetor de distância minima para alcançar o vertice.
    list<int> convidados;
    vector<bool> cor(g.size(), false); // Define se cada vertice ja foi encontrado ou não.

    queue<int> Q; // Fila que define a ordem de acesso aos vertices.

    // Inicialização
    cor[inicio] = true; // Define a cor do vértice raiz como acessado.
    d[inicio] = 0; // Define a distância da raiz para ela mesma como 0.

    Q.push(inicio); // Enfileira a raiz.

    // Enquanto a fila não estiver vazia.
    while(!Q.empty()){
        int u = Q.front(); // Define u como sendo o vértice na frente na fila.
        Q.pop(); // Desenfileira.
        // cout<<"vertice atual: "<<u<<endl;
        // Para todo vertice adjacente à "u".
        for(int i = 0; i < g[u].size(); i++){
            // Se o vertice adjacente à "u" não tiver sido encontrado.
            if(cor[g[u][i]] == false){
                // cout<<g[u][i]<<endl;
                Q.push(g[u][i]); // Enfileira o vertice adjacente.
                cor[g[u][i]] = true; // Define o vertice adjacente como encontrado.
                d[g[u][i]] = d[u]+1; // Define a distancia minima para alcançar o vertice.
                // cout<<"Distancia minima = "<<d[g[u][i]]<<endl;
                if(d[g[u][i]]<=dist)
                    convidados.push_back(g[u][i]);
            }
        }
        // cout<<endl;
    }

    // *** OBS: O RETORNO DA FUNÇÃO PODE SER ALTERADO CONFORME A NECESSIDADE DO PROBLEMA. ***
    return convidados; // Retorna o vetor peso.
}

int main()
{
    int N,M, posicao, contador = 0, contador2 = 0, aux1, aux2, tamanho;
    string palavra, primeira, segunda;

    map<string, int> mapa;
    map<string, int>::iterator it;

    cin>>N>>M;
    cin.ignore();

    g.resize(N+1);

    for(int i=0;i<N;i++)
    {
        getline(cin,palavra);
        posicao=palavra.find(" ");
        primeira=palavra.substr(0,posicao);
        segunda=palavra.substr(posicao+1);

        it = mapa.find(primeira);
        if(it == mapa.end())
        {
            mapa.insert(pair<string,int>(primeira,contador));
            aux1 = contador;
            contador++;
        }

        else
        {
            aux1 = it->second;
        }

        it = mapa.find(segunda);
        if(it == mapa.end())
        {
            mapa.insert(pair<string,int>(segunda,contador));
            aux2 = contador;
            contador++;
        }

        else
        {
            aux2 = it->second;
        }

        g[aux1].push_back(aux2);
        g[aux2].push_back(aux1);


    }

    list<int> convidados = bfs(0, M);

    list<string> nomes;

    tamanho = convidados.size();
    cout<<tamanho<<endl;

    while (!convidados.empty())
    {
        aux1 = convidados.front();
        convidados.pop_front();
        //cout<<aux1<<endl;
        for(map<string, int>::iterator it2=mapa.begin(); it2!=mapa.end(); it2++)
        {
            if(it2->second == aux1)
            {
                nomes.push_back(it2->first);
            }
        }
    }

    nomes.sort();
    tamanho = nomes.size();
    for (int j = 0; j < tamanho; ++j)
    {
        cout<<nomes.front()<<endl;
        nomes.pop_front();
    }

}
