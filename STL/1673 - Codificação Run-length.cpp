#include <iomanip>
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    int i, j, tamanho, cont, auxiliar;
    string palavra, resultado;
    char aux, caract;

    while (getline(cin,palavra))
    {
        stack<char> pilha;
        cont = 0;
        for(i=0; i<palavra.size(); i++)
        {
            if(palavra[i] == palavra[i+1])
            {
                pilha.push(palavra[i]);
                cont++;
            }
            if(cont == 9)
            {
                aux = pilha.top();
                pilha.pop();
                printf("%d%c",cont,aux);
                cont = 0;
            }
            else if(palavra[i] != palavra[i+1] && cont>0 && palavra[i+1] != '\0')
            {
                aux = pilha.top();
                pilha.pop();
                cont++;
                printf("%d%c",cont,aux);
                cont = 0;
            }
            else if(palavra[i+1] == '\0' && palavra[i] == palavra[i-1] && cont == 0)
            {
                j = i;
                while(palavra[j] != palavra[j+1] && j < palavra.size())
                {
                    j++;
                }
                printf("1");
                for (int k = i; k < j; ++k)
                {
                    if(palavra[k] == '1')
                        printf("%c%c",palavra[k], palavra[k]);
                    else
                        printf("%c",palavra[k]);
                }
                printf("1");
                i = j-1;
                cont = 0;
            }
            else if(palavra[i] != palavra[i+1] && cont>0 && palavra[i+1] == '\0' && palavra[i] == palavra[i-1])
            {
                aux = pilha.top();
                pilha.pop();
                cont++;
                printf("%d%c",cont,aux);
                cont = 0;
            }
            else if(palavra[i] != palavra[i+1] && palavra[i+1] == '\0')
            {
                j = i;
                while(palavra[j] != palavra[j+1] && j < palavra.size())
                {
                    j++;
                }
                printf("1");
                for (int k = i; k < j; ++k)
                {
                    if(palavra[k] == '1')
                        printf("%c%c",palavra[k], palavra[k]);
                    else
                        printf("%c",palavra[k]);
                }
                printf("1");
                i = j-1;
                cont = 0;
            }
            else if(palavra[i] != palavra[i+1] && palavra[i+1] != '\0')
            {
                j = i;
                while(palavra[j] != palavra[j+1] && j < palavra.size())
                {
                    j++;
                }
                printf("1");
                for (int k = i; k < j; ++k)
                {
                    if(palavra[k] == '1')
                        printf("%c%c",palavra[k], palavra[k]);
                    else
                        printf("%c",palavra[k]);
                }
                printf("1");
                i = j-1;
                cont = 0;
            }
        }
        cout<<endl;
    }
}
