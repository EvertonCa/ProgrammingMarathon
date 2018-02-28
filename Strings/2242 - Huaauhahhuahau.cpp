h#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
 {
	string risada, inverso, reverso;
	string vogais;
	int quantidade, quant, i, j, comp;
		
	cin>>risada;
	quantidade=risada.size();
	
	for(i=0; i<quantidade; i++)
	{
		if(risada[i] == 'a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u')
		{
			vogais+=risada[i];	
		}	
	}
	quant=vogais.size();
	
	comp=quant-1;
	
	for(j=0; j<(quant/2); j++)
	{
		inverso+=vogais[j];
		reverso+=vogais[comp];
		comp=comp-1;
	}
		
	if(inverso==reverso)
		cout<<"S"<<endl;
	else
		cout<<"N"<<endl;

	system("PAUSE");
    return 0;
}
