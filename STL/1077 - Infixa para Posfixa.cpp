#include <iomanip>
#include <iostream>
#include <stack>
using namespace std;

int prioridade(char c, char t)
{
    int pc, pt;

    if(c == '^')
        pc = 3;
    else if(c == '*' || c == '/')
        pc = 2;
    else if(c == '+' || c == '-')
        pc = 1;
    else if(c == '(')
        pc = 4;

    if(t == '^')
        pt = 3;
    else if(t == '*' || t == '/')
        pt = 2;
    else if(t == '+' || t == '-')
        pt = 1;
    else if(t == '(')
        pt = 0;

    return (pc > pt);
}

int main(void)
{
    string expressao;
    int quant, j;

    cin>>quant;
    getchar();

    for (int i = 0; i < quant; ++i)
    {
        stack<char> pilha;
        char caract;

        j = 0;

        getline(cin,expressao);
        pilha.push('(');
        do
        {
            if((expressao[j] >= 'a' && expressao[j] <= 'z') || (expressao[j] >= 'A' && expressao[j] <= 'Z') || (expressao[j] >= '0' && expressao[j] <= '9'))
            {
                cout<<expressao[j];
            }

            else if (expressao[j] == '(')
                pilha.push(expressao[j]);

            else if (expressao[j] == ')' || expressao[j] == '\0')
                do
                {
                    caract = pilha.top();
                    pilha.pop();

                    if(caract != '(')
                    {
                        cout<<caract;
                    }

                }while(caract != '(');

            else if(expressao[j] == '+' || expressao[j] == '-' || expressao[j] == '*' || expressao[j] == '/' || expressao[j] == '^')
            {
                while (true)
                {
                    caract = pilha.top();
                    pilha.pop();

                    if(prioridade(expressao[j], caract))
                    {
                        pilha.push(caract);
                        pilha.push(expressao[j]);
                        break;
                    }
                    else
                    {
                        cout<<caract;
                    }
                }
            }

            j++;

        }while(j <= expressao.size());

        cout<<endl;

        pilha.empty();
    }
}
