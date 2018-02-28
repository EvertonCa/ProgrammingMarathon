#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
	int m[100][100], i, j, N, soma, x;

	scanf("%d",&N);

	while(N!=0)
	{
        for(i=0; i<N; i++)
		{
			soma=0;
			for(j=(0+i); j<N; j++)
       		{
				soma=soma+1;
				m[i][j]=soma;
			}
		}
		for(j=0; j<N; j++)
		{
			soma=0;
			for(i=(0+j); i<N; i++)
       		{
				soma=soma+1;
				m[i][j]=soma;
			}
		}



		for(i=0; i<N; i++)
		{
            for(j=0; j<N; j++)
        	{
				if(j==0)
					printf("%3d",m[i][j]);
				else
				    printf(" %3d",m[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d",&N);
	}
	system("PAUSE");
    return 0;
}
