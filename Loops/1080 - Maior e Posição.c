#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i, maior, posicao;

	for(i=1; i<=100; i=i+1)
	{
		scanf("%d",&N);
		
		if(N>maior)
		{
			posicao=i;
			maior=N;
		}
	}	
	
	printf("%d\n",maior);
	printf("%d\n",posicao);
	
	system("PAUSE");
    return 0;
}
