#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
	int m[100][100], i, j, N, soma, x, contaDigitos=0, valor;

	while(scanf("%d",&N)!=EOF)
	{
        for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
       		{
				m[i][j]=3;
			}
		}
		for(i=0; i<N; i++)
		{
			for(j=i; j<=i; j++)
       		{
				m[i][j]=1;
			}
		}
		
		for(i=0; i<N; i++)
		{
			for(j=(N-1-i); j>=(N-1-i); j--)
       		{
				m[i][j]=2;
			}
		}

        for(i=0; i<N; i++)
		{
            for(j=0; j<N; j++)
        	{
				printf("%d",m[i][j]);
			}
			printf("\n");
		}
	}
	system("PAUSE");
    return 0;
}
