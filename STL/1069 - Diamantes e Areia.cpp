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
    int quant, i, j, diamantes;
    string minerio;


    cin>>quant;

    for(i=0; i<quant; i++)
    {
        stack<char> pilha;
        cin>>minerio;
        diamantes = 0;

        for(j=0; j<(minerio.size()); j++)
        {
            if(minerio[j] == '<')
                pilha.push(minerio[j]);
            if(minerio[j] == '>')
            {
                if(!pilha.empty())
                {
                    pilha.pop();
                    diamantes++;
                }
            }
        }

        cout<<diamantes<<endl;

    }
}



