#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    long long int A[60];
    int i, a, j, k, X, Y;

    scanf("%d",&X);

	for(a=0; a<X; a++)
	{
        A[0]=0;
    	A[1]=1;
    	
        scanf("%d",&Y);

		for(i=2; i<=Y; i++)
    	{
		
			A[i]=A[(i-1)]+A[(i-2)];

		}
        printf("Fib(%d) = %lld\n",Y,A[Y]);

	}

	system("PAUSE");
    return 0;
}
