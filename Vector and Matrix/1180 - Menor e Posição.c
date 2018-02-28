#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double x[1000];
    int N, i, menor=1000, posicao;
    
    scanf("%d",&N);
    
    for(i=0; i<N; i++)
	{
        scanf("%lf",&x[i]);

		if(x[i]<menor)
		{
		    menor=x[i];
		    posicao=i;
		}
        
	}
	
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",posicao);


	system("PAUSE");
    return 0;
}
