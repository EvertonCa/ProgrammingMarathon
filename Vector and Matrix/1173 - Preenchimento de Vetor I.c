#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N[10], i=0, X, valor;

    scanf("%d",&X);
    N[i]=X;
    printf("N[%d] = %d\n",i,N[i]);
    valor=X;

    for(i=1; i<10; i=i+1)
    {
		N[i]=valor*2;
		valor=N[i];

		printf("N[%d] = %d\n",i,N[i]);
  		
   	}

	system("PAUSE");
    return 0;
}
