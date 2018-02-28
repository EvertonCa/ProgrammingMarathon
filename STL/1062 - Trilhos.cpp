#include <iomanip>
#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main(void)
{
    int vagoes, aux, temp, aux2;

    while (cin >> vagoes && vagoes)
    {

        while(true)
        {
            stack<int> pilha;
            list<int> saida;
            list<int> entrada;
            bool quebrar = false;
            pilha.push(1500);

            int teste=0;
            scanf("%d", &aux);
            saida.push_front(aux);
            entrada.push_front(1);
            if(!aux) break;
            for (int i = 1; i < vagoes; ++i)
            {
                scanf("%d",&aux);
                saida.push_front(aux);
                entrada.push_front(i+1);
            }

            while (!saida.empty())
            {
                aux = saida.back();
                saida.pop_back();
                teste = 0;

                if(!entrada.empty())
                {
                    aux2 = entrada.back();
                    entrada.pop_back();
                    pilha.push(aux2);
                }

                while(teste == 0)
                {
                    if(pilha.top() == aux)
                    {
                        while(pilha.top() == aux)
                        {
                            pilha.pop();
                            if(pilha.top() == saida.back())
                            {
                                aux = saida.back();
                                saida.pop_back();
                            }

                        }
                        teste = 1;
                    }

                    else if(entrada.empty() && pilha.top() != aux)
                    {
                        cout<<"No"<<endl;
                        quebrar = true;
                        break;
                    }

                    else
                    {
                        aux2 = entrada.back();
                        entrada.pop_back();
                        pilha.push(aux2);
                    }
                }

                if(saida.empty())
                {
                    cout<<"Yes"<<endl;
                }

                if(quebrar)
                    break;
            }
        }
    }
}
