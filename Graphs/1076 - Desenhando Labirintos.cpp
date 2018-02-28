#include <cstdlib>
#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

#define INF -1 // Nao descoberto (desconexo).
#define NUL -2 // Orfao (raiz).
#define PRETO 0 // Descendentes j� est�o pretos ou n�o tem descendentes.
#define CINZA 1 // Descoberto.
#define BRANCO 2 // Nao descoberto.

int *cor;
int *predescessor;
int *descoberta; // Tempo de descoberta
int *termino; // Tempo de t�rmino
int tempo; // "Rel�gio"
int inicial; // vertice inicial
int passos; //passos ate chegar no inicial completamente

using namespace std;

vector<int> *g;

void DFS_visit(int vA)
{
     int vB;
     vector<int>::iterator it;
     cor[vA] = CINZA; // Pinta de cinza o v�rtice que est� sendo avaliado no momento, o que significa que ele acaba de ser descoberto.
     tempo++; // O tempo passa, uma vez que a chamada desta fun��o representa o percorrimento de uma aresta (afastando-se da raiz).
     descoberta[vA] = tempo; // Guarda o tempo em que o v�rtice foi descoberto. Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo v�rtice pela primeira vez.

     for(it = g[vA].begin(); it!=g[vA].end(); it++) // Varre o vector, passando por todos os vertices adjacentes ao vertice u.
	 { 
         vB = *it; // Recebe o valor para que o iterador est� apontando
         if(cor[vB] == BRANCO) // Se o vertice(vB) adjacente �quele que est� sendo avaliado(vA) ainda n�o tiver sido descoberto (branco).
		 { 
             predescessor[vB] = vA; // O predecessor do v�rtice adjacente se torna o v�rtice que est� sendo avaliado pela fun��o(vA).
             DFS_visit(vB); // A fun��o � chamada, recursivamente, para avaliar o v�rtice adjacente.
         }
     }

     cor[vA] = PRETO; // Pinta de preto o v�rtice que est� sendo avaliado pela fun��o, j� que todos os v�rtices descendentes dele j� foram completamente avaliados (e tamb�m pintados de preto).
     
     if(cor[vA] == PRETO && vA == inicial)
     {
		 passos = tempo;
	 }
     
     termino[vA] = tempo; // Guarda o tempo em que todos os v�rtices descendentes daquele que esta sendo avaliado (vA) sao completamente avaliados (e tambem pintados de preto). Em outras palavras, guarda o tempo em que a busca em profundidade passa pelo vertice pela segunda vez.
     tempo++; // O tempo passa, uma vez que o fim desta fun��o representa o percorrimento de uma aresta (aproximando-se da raiz).
}

void DFS(int numeroDeVertices, int raiz)
{
    // Aloca��o din�mica
    cor = new int[numeroDeVertices];
    predescessor = new int[numeroDeVertices];
    descoberta = new int[numeroDeVertices];
    termino = new int[numeroDeVertices];

    int vA;

    for(vA=0; vA < numeroDeVertices; vA++) // Coloca os valores iniciais em todas as posicoes dos vetores cor, descoberta e predecessor.
	{ 
        cor[vA] = BRANCO;
        descoberta[vA] = INF;
        predescessor[vA] = NUL;
    }

    tempo = -1; // Inicia tempo como -1 pois, como a funcao DFS_visit o incrementa em seu inicio, o valor deste sera 0 na execucao da funcao para o primeiro vertice (raiz).
    for(int i=raiz; i <numeroDeVertices; i++)
	{
		if(cor[i]==BRANCO)
    		DFS_visit(i); // Chama uma segunda funcao, que sera utilizada recursivamente, enviando o vertice raiz como parametro.
	}
}

int main()
{
	int testes;
	cin>>testes;
	for(int j=0; j<testes; j++)
	{
		int N,M;
	
		cin>>inicial;
	
		cin>>N>>M;

		g = new vector<int> [N];

  	  int x,y;

		for(int i=0;i<M;i++)
		{
			cin>>x>>y;
			g[x].push_back(y);
  			g[y].push_back(x);
		}

		DFS(N,inicial); //primeiro par�metro = tamanho do grafo; segundo par�metro = v�rtice inicial
	
		/*for(int i=inicial; i<N; i++)
		{
			cout<<i<<" = "<<descoberta[i]<<endl;
		}
		*/
		cout<<passos<<endl;
	
	}

	system("PAUSE");

    return 0;

}
