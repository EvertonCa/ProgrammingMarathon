#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>

using namespace std;

class Grafo
{
public:
    Grafo()
    {
        criaGrafo();
    }

    void criaGrafo()
    {
        g.resize(82);

        for (int x = 0; x < 8; ++x)
        {
            for (int y = 0; y < 8; ++y)
            {
                xAtual = x;
                yAtual = y;
                ampliaGrafo();
            }
        }
    }

    void ampliaGrafo()
    {
        if(xAtual == 0)
        {
            if(yAtual == 0)
            {
                direita1cima2();
                direita2cima1();
            }
            else if(yAtual == 1)
            {
                direita1cima2();
                direita2cima1();
                direita2baixo1();
            }
            else if(yAtual == 6)
            {
                direita2cima1();
                direita2baixo1();
                direita1baixo2();
            }
            else if(yAtual == 7)
            {
                direita2baixo1();
                direita1baixo2();
            }
            else
            {
                direita1baixo2();
                direita2baixo1();
                direita1cima2();
                direita2cima1();
            }
        }
        else if(xAtual == 1)
        {
            if(yAtual == 0)
            {
                direita1cima2();
                direita2cima1();
                esquerda1cima2();
            }
            else if(yAtual == 1)
            {
                direita1cima2();
                direita2cima1();
                direita2baixo1();
                esquerda1cima2();
            }
            else if(yAtual == 6)
            {
                direita2cima1();
                direita2baixo1();
                direita1baixo2();
                esquerda1baixo2();
            }
            else if(yAtual == 7)
            {
                direita2baixo1();
                direita1baixo2();
                esquerda1baixo2();
            }
            else
            {
                direita1baixo2();
                direita2baixo1();
                direita1cima2();
                direita2cima1();
                esquerda1baixo2();
                esquerda1cima2();
            }
        }
        else if(xAtual == 6)
        {
            if(yAtual == 0)
            {
                direita1cima2();
                esquerda2cima1();
                esquerda1cima2();
            }
            else if(yAtual == 1)
            {
                direita1cima2();
                esquerda2cima1();
                esquerda1cima2();
                esquerda2baixo1();
            }
            else if(yAtual == 6)
            {
                esquerda2cima1();
                esquerda2baixo1();
                esquerda1baixo2();
                direita1baixo2();
            }
            else if(yAtual == 7)
            {
                direita1baixo2();
                esquerda1baixo2();
                esquerda2baixo1();
            }
            else
            {
                direita1baixo2();
                direita1cima2();
                esquerda1baixo2();
                esquerda1cima2();
                esquerda2baixo1();
                esquerda2cima1();
            }
        }
        else if(xAtual == 7)
        {
            if(yAtual == 0)
            {
                esquerda2cima1();
                esquerda1cima2();
            }
            else if(yAtual == 1)
            {
                esquerda2cima1();
                esquerda1cima2();
                esquerda2baixo1();
            }
            else if(yAtual == 6)
            {
                esquerda2cima1();
                esquerda2baixo1();
                esquerda1baixo2();
            }
            else if(yAtual == 7)
            {
                esquerda1baixo2();
                esquerda2baixo1();
            }
            else
            {
                esquerda1baixo2();
                esquerda1cima2();
                esquerda2baixo1();
                esquerda2cima1();
            }
        }
        else
        {
            if(yAtual == 0)
            {
                esquerda2cima1();
                esquerda1cima2();
                direita2cima1();
                direita1cima2();
            }
            else if(yAtual == 1)
            {
                esquerda2cima1();
                esquerda1cima2();
                esquerda2baixo1();
                direita1cima2();
                direita2cima1();
                direita2baixo1();
            }
            else if(yAtual == 6)
            {
                esquerda2cima1();
                esquerda2baixo1();
                esquerda1baixo2();
                direita1baixo2();
                direita2baixo1();
                direita2cima1();
            }
            else if(yAtual == 7)
            {
                esquerda1baixo2();
                esquerda2baixo1();
                direita2baixo1();
                direita1baixo2();
            }
            else
            {
                direita1baixo2();
                direita1cima2();
                direita2cima1();
                direita2baixo1();
                esquerda1cima2();
                esquerda1baixo2();
                esquerda2baixo1();
                esquerda2cima1();
            }
        }
    }

    void direita1cima2()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual+1)*10)+(yAtual+2));
    }

    void direita1baixo2()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual+1)*10)+(yAtual-2));
    }

    void direita2cima1()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual+2)*10)+(yAtual+1));
    }

    void direita2baixo1()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual+2)*10)+(yAtual-1));
    }

    void esquerda1cima2()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual-1)*10)+(yAtual+2));
    }

    void esquerda1baixo2()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual-1)*10)+(yAtual-2));
    }

    void esquerda2cima1()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual-2)*10)+(yAtual+1));
    }

    void esquerda2baixo1()
    {
        g[((xAtual*10)+yAtual)].push_back(((xAtual-2)*10)+(yAtual-1));
    }

    void criaCoordenadas(string stringInicio, string stringFim)
    {
        this->stringInicio = stringInicio;
        this->stringFim = stringFim;
        xInicio = stringInicio[0] - 97;
        yInicio = stringInicio[1] - 49;
        //cout << xInicio << yInicio << endl;
        xFim = stringFim[0] - 97;
        yFim = stringFim[1] - 49;
        //cout << xFim << yFim << endl;
    }

    void exibe()
    {
        for (int i = 0; i < 81; ++i)
        {
            if(g[i].size() > 0)
            {
                cout << "Casa: " << i << " é ligado com "<< g[i][0] << endl;
            }
        }

        for (int j = 0; j < g[77].size(); ++j)
        {
            cout << "Ligado com " << g[77][j] << " ";
        }
    }

public:
    vector< vector<int> > g;
    string stringInicio, stringFim;
    int xInicio,xFim, yInicio, yFim, xAtual, yAtual;
};

vector< vector<int> > g;

 //Algoritmo calcula a menor distancia para alcançar todos os vertices do grafo partindo de um vertice inicial.
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
        //cout<<"vertice atual: "<<u<<endl;

        // Para todo vertice adjacente à "u".
        for(int i = 0; i < g[u].size(); i++)
        {
            // Se o vertice adjacente à "u" não tiver sido encontrado.
            if(cor[g[u][i]] == false)
            {
                //cout<<g[u][i]<<endl;
                Q.push(g[u][i]); // Enfileira o vertice adjacente.
                cor[g[u][i]] = true; // Define o vertice adjacente como encontrado.
                d[g[u][i]] = d[u]+1; // Define a distancia minima para alcançar o vertice.

            }
            if(g[u][i] == fim)
            {
                distancia = d[g[u][i]];
                //cout<<distancia<<endl;
                teste = false;
            }

        }
    }

    // *** OBS: O RETORNO DA FUNÇÃO PODE SER ALTERADO CONFORME A NECESSIDADE DO PROBLEMA. ***
    return distancia; // Retorna o vetor peso.
}

int main()
{
    string a, b;
    Grafo meuGrafo;
    g = meuGrafo.g;
    //meuGrafo.exibe();
    while (cin >> a >> b)
    {
        meuGrafo.criaCoordenadas(a, b);
        int distancia = bfs(((meuGrafo.xInicio*10)+meuGrafo.yInicio), ((meuGrafo.xFim*10)+meuGrafo.yFim));
        cout << "To get from " << a << " to "<< b <<" takes "<< distancia << " knight moves." << endl;
    }

}
