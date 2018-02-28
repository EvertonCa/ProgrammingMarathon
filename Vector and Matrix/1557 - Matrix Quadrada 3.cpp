#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
 {
	int m[100][100], i, j, N, soma, x, contaDigitos, valor;

	while(scanf("%d",&N)!=EOF)
	{
		contaDigitos=0;
		soma=1;
        for(i=0; i<N; i++)
		{
			for(j=(0); j<N; j++)
       		{
				m[i][j]=soma;
				soma=soma*2;
			}
			soma=m[0][i+1];
		}
		valor=m[N-1][N-1];

		while (valor != 0)
		{
			contaDigitos = contaDigitos + 1;
			valor = valor / 10;
		}

		for(i=0; i<N; i++)
		{
            for(j=0; j<N; j++)
        	{
				if(j==0)
					cout<<setw(contaDigitos)<<m[i][j];
				else
				    cout<<" "<<setw(contaDigitos)<<m[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
		scanf("%d",&N);
	}
	system("PAUSE");
    return 0;
}
