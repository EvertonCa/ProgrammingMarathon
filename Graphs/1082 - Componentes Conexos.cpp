#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<list>

using namespace std;

#define PRETO 0 // Descendentes já estão pretos ou não tem descendentes.
#define CINZA 1 // Descoberto.
#define BRANCO 2 // Não descoberto.

int *cor;
int contador=0;

list<int> componentes;
list<int>::iterator it3;

using namespace std;

vector<int> *g;


void DFS_visit(int vA)
{
    int vB;
    vector<int>::iterator it;
    cor[vA] = CINZA; // Pinta de cinza o vértice que está sendo avaliado no momento, o que significa que ele acaba de ser descoberto.

    componentes.push_back(vA);

    for(it = g[vA].begin(); it!=g[vA].end(); it++)
    { // Varre o vector, passando por todos os vértices adjacentes ao vértice u.

        vB = *it; // Recebe o valor para que o iterador está apontando
        if(cor[vB] == BRANCO)
        {
            DFS_visit(vB); // A função é chamada, recursivamente, para avaliar o vértice adjacente.
        }
    }

    cor[vA] = PRETO; // Pinta de preto o vértice que está sendo avaliado pela função, já que todos os vértices descendentes dele já foram completamente avaliados (e também pintados de preto).
}


int DFS(int numeroDeVertices)
{
    // Alocação dinâmica
    cor = new int[numeroDeVertices];
    char aux;
    int vA;

    map<int, char> mapa;
    map<int, char>::iterator it2;

    mapa.insert(pair<int,char>(0,'a'));
    mapa.insert(pair<int,char>(1,'b'));
    mapa.insert(pair<int,char>(2,'c'));
    mapa.insert(pair<int,char>(3,'d'));
    mapa.insert(pair<int,char>(4,'e'));
    mapa.insert(pair<int,char>(5,'f'));
    mapa.insert(pair<int,char>(6,'g'));
    mapa.insert(pair<int,char>(7,'h'));
    mapa.insert(pair<int,char>(8,'i'));
    mapa.insert(pair<int,char>(9,'j'));
    mapa.insert(pair<int,char>(10,'k'));
    mapa.insert(pair<int,char>(11,'l'));
    mapa.insert(pair<int,char>(12,'m'));
    mapa.insert(pair<int,char>(13,'n'));
    mapa.insert(pair<int,char>(14,'o'));
    mapa.insert(pair<int,char>(15,'p'));
    mapa.insert(pair<int,char>(16,'q'));
    mapa.insert(pair<int,char>(17,'r'));
    mapa.insert(pair<int,char>(18,'s'));
    mapa.insert(pair<int,char>(19,'t'));
    mapa.insert(pair<int,char>(20,'u'));
    mapa.insert(pair<int,char>(21,'v'));
    mapa.insert(pair<int,char>(22,'w'));
    mapa.insert(pair<int,char>(23,'x'));
    mapa.insert(pair<int,char>(24,'y'));
    mapa.insert(pair<int,char>(25,'z'));


    for(vA=0; vA < numeroDeVertices; vA++)
    { // Coloca os valores iniciais em todas as posições dos vetores cor, descoberta e predecessor.

        cor[vA] = BRANCO;
    }

    for(int i=0; i < numeroDeVertices; i++)
    {
        if(cor[i]==BRANCO)
        {
            DFS_visit(i); // Chama uma segunda função, que será utilizada recursivamente, enviando o vértice raiz como parâmetro.

            componentes.sort();

            for(it3=componentes.begin(); it3!=componentes.end(); ++it3)
            {
                it2 = mapa.find(*it3);
                aux = it2->second;

                cout<<aux<<",";
            }
            componentes.clear();

            cout<<endl;
            contador++;
        }
    }

    return contador;
}

int main()
{
    int N, M, testes, aux1, aux2, quant;
    char vertice1, vertice2;

    map<char, int> mapa;
    map<char, int>::iterator it;

    mapa.insert(pair<char,int>('a',0));
    mapa.insert(pair<char,int>('b',1));
    mapa.insert(pair<char,int>('c',2));
    mapa.insert(pair<char,int>('d',3));
    mapa.insert(pair<char,int>('e',4));
    mapa.insert(pair<char,int>('f',5));
    mapa.insert(pair<char,int>('g',6));
    mapa.insert(pair<char,int>('h',7));
    mapa.insert(pair<char,int>('i',8));
    mapa.insert(pair<char,int>('j',9));
    mapa.insert(pair<char,int>('k',10));
    mapa.insert(pair<char,int>('l',11));
    mapa.insert(pair<char,int>('m',12));
    mapa.insert(pair<char,int>('n',13));
    mapa.insert(pair<char,int>('o',14));
    mapa.insert(pair<char,int>('p',15));
    mapa.insert(pair<char,int>('q',16));
    mapa.insert(pair<char,int>('r',17));
    mapa.insert(pair<char,int>('s',18));
    mapa.insert(pair<char,int>('t',19));
    mapa.insert(pair<char,int>('u',20));
    mapa.insert(pair<char,int>('v',21));
    mapa.insert(pair<char,int>('w',22));
    mapa.insert(pair<char,int>('x',23));
    mapa.insert(pair<char,int>('y',24));
    mapa.insert(pair<char,int>('z',25));

    cin>>testes;

    for (int k = 0; k < testes; ++k)
    {
        cin>>N>>M;

        g = new vector<int> [N+1];

        for(int i=0;i<M;i++)
        {
            cin>>vertice1>>vertice2;

            it = mapa.find(vertice1);
            aux1 = it->second;

            it = mapa.find(vertice2);
            aux2 = it->second;

            g[aux1].push_back(aux2);
            g[aux2].push_back(aux1);
        }

        cout<<"Case #"<<k+1<<":"<<endl;
        quant = DFS(N);
        cout<<quant<<" connected components"<<endl<<endl;
        quant = 0;
        contador=0;

    }
}
