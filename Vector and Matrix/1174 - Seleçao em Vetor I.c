#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    float A[100];
    int i;

    for(i=0; i<100; i++)
    {
		scanf("%f",&A[i]);

	}

	for(i=0; i<100; i++)
    {

		if(A[i]<=10)
		    printf("A[%d] = %0.1f\n",i,A[i]);

	}

	system("PAUSE");
    return 0;
}
