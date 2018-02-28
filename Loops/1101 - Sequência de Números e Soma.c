#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int M=1, N=1, soma=0, i;

	while(M>0 && N>0)
	{
        scanf("%d %d",&M,&N);
		soma=0;

		if(M>N && M!=0 && N!=0 && M>0 && N>0)
        {
            for(i=N; i<=M; i=i+1)
            {
                printf("%d ",i);
                soma=soma+i;
			}
			
			printf("Sum=%d\n",soma);
		}
		else if(N>M && M!=0 && N!=0 && M>0 && N>0)
		{
            for(i=M; i<=N; i=i+1)
            {
                printf("%d ",i);
                soma=soma+i;
			}
			
			printf("Sum=%d\n",soma);
		}
		
		
	}
	
	system("PAUSE");
    return 0;
}
