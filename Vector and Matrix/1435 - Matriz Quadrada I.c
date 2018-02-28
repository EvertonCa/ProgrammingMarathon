#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
	int m[100][100], i, j, N, x;
	
	scanf("%d",&N);
	
	while(N!=0)
	{
        for(i=0; i<N; i++)
		{
        	for(j=(0+i); j<(N-i); j++)
       		{
				m[i][j]=i+1;
			}
		}
		x=0;
		for(i=(N-1); i>=0; i--)
		{
        	for(j=(0+x); j<(N-x); j++)
       		{
				m[i][j]=1+x;
			}
            x=x+1;
		}
		for(j=0; j<N; j++)
		{
        	for(i=(0+j); i<(N-j); i++)
       		{
				m[i][j]=j+1;
			}
		}
		x=0;
		for(j=(N-1); j>=0; j--)
		{
        	for(i=(0+x); i<(N-x); i++)
       		{
				m[i][j]=1+x;
			}
            x=x+1;
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
