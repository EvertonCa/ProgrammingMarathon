#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main(void)
 {
    int N, i, potencia;

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
			
		if(i%2==0)
		{
			potencia=pow(i,2);
			printf("%d^2 = %d\n",i,potencia);	
		}	
			
	}
		
	system("PAUSE");
    return 0;
}
