#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main(void)
{
    int j, errado;
    string expressao;


    while(getline(cin,expressao))
    {
        stack<char> pilha;
        errado = 0;

        for(j=0; j<(expressao.size()); j++)
        {
            if(expressao[j] == '(')
                pilha.push(expressao[j]);
            if(expressao[j] == ')')
            {
                if(!pilha.empty())
                {
                    pilha.pop();
                }
                else
                    errado = 1;
            }
        }

        if(pilha.empty() && errado == 0)
            cout<<"correct"<<endl;
        else
            cout<<"incorrect"<<endl;

    }
}



