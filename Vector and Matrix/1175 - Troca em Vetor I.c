#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A[20];
    int i, j;

    for(i=0; i<20; i=i+1)
    {
		scanf("%d",&A[i]);

	}

	i=0;
	for(j=19; j>=0; j--)
    {
		printf("N[%d] = %d\n",i,A[j]);
		i=i+1;

	}

	system("PAUSE");
    return 0;
}
