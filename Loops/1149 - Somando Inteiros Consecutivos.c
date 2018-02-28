#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, N, soma=0, i;

    scanf("%d %d",&A,&N);
    
    while(N<=0)

        scanf("%d",&N);

	for(i=A; i<(A+N); i=i+1)
	{
		soma=soma+i;
	}
	
	printf("%d\n",soma);

	system("PAUSE");
    return 0;
}

