#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <list>
#include <stack>
using namespace std;

int main(void)
{
    char rnaa[305];

    while (cin>>rnaa)
    {
        stack<char> pilha;
        char aux;
        int cont = 0, tamanho;

        tamanho = strlen(rnaa);

        for (int j = 0; j < tamanho; ++j)
        {
            if (pilha.empty())
            {
                pilha.push(rnaa[j]);
            }

            else
            {
                aux = pilha.top();

                if ((aux == 'B' && rnaa[j] == 'S') || (aux == 'S' && rnaa[j] == 'B') || (aux == 'C' && rnaa[j] == 'F') || (aux == 'F' && rnaa[j] == 'C'))
                {
                    cont++;
                    pilha.pop();
                }

                else
                {
                    pilha.push(rnaa[j]);
                }

            }

        }

        cout<<cont<<endl;
    }
}