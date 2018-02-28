#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector< vector<int> > g;
vector<vector<int>> chaves;

vector<int> chavesEncontradas;
vector<int>::iterator it;

bool bfs(int inicio, int salas, vector<bool> &portaAberta)
{
    vector<bool> cor(g.size(), false);
    bool temChave = false, resposta = false;

    int contador = 0;

    queue<int> Q;

    cor[inicio] = true;
    contador++;
    Q.push(inicio);

    chavesEncontradas.push_back(1);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        //cout<<"vertice atual: "<<u<<endl;

        if(!chaves[u].empty())
        {
            for (int i = 0; i < chaves[u].size(); ++i)
            {
                chavesEncontradas.push_back(chaves[u][i]);
            }
        }

        portaAberta[u] = true;

        for(int i = 0; i < g[u].size(); i++)
        {
            if(!portaAberta[g[u][i]])
            {
                for (it = chavesEncontradas.begin(); it!=chavesEncontradas.end() ; ++it)
                {
                    if(*it == g[u][i])
                    {
                        temChave = true;
                        break;
                    }
                }
            }

            if( ((cor[g[u][i]] == false) && temChave) || ((cor[g[u][i]] == false) && portaAberta[g[u][i]]) )
            {
                //cout<<g[u][i]<<endl;
                Q.push(g[u][i]);
                cor[g[u][i]] = true;
                contador++;
                portaAberta[g[u][i]] = true;
            }

            temChave = false;
        }
        //cout<<endl;
    }

    if(contador == salas)
    {
        resposta = true;
    }
    return resposta;
}

int main()
{
    int N,M;
    while ((scanf("%d %d", &N, &M) != EOF))
    {
        bool resposta = false;

        int x,y;

        g.resize(N+1);
        chaves.resize(N+1);

        vector<bool> portaAberta(g.size(), false);

        for(int i=1;i<=M;i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        for(int i=2;i<=N;i++)
        {
            cin>>x;
            chaves[x].push_back(i);
        }

        for (int j = 0; j < 50; ++j)
        {
            //cout<<j+1<<" tentativa"<<endl;
            resposta = bfs(1, N, portaAberta);

            if(resposta)
            {
                cout<<"sim"<<endl;
                break;
            }
        }
        if(!resposta)
            cout<<"nao"<<endl;

        g.clear();
        chaves.clear();
        chavesEncontradas.clear();

    }
}
