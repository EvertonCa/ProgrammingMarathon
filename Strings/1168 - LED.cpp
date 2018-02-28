#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void)
 {
	string valor;
	int quantidade, i, leds=0, N, j;
	cin>>N;
	for(j=0; j<N; j++)
	{
	
		cin>>valor;
		leds=0;
		quantidade=valor.size();
	
		for(i=0; i<quantidade; i++)
		{
			if(valor[i] == '1')
				leds=leds+2;
			
			else if(valor[i] == '2' || valor[i]=='3' || valor[i]=='5')
				leds=leds+5;
			
			else if(valor[i] == '4')
				leds=leds+4;
			
			else if(valor[i] == '6' || valor[i]=='9' || valor[i]=='0')
				leds=leds+6;
			
			else if(valor[i] == '7')
				leds=leds+3;
			
			else if(valor[i] == '8')
				leds=leds+7;
				
		}
		cout<<leds<<" leds"<<endl;
	}
	system("PAUSE");
    return 0;
}
