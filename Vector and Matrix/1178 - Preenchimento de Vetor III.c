#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double N[100];
    double T, metade;
    int i;

    scanf("%lf",&T);
    
    N[0]=T;
    printf("N[0] = %0.4lf\n",N[0]);
    metade=T;

	for(i=1; i<100; i++)
	{
		metade=metade/2;

		N[i]=metade;

        printf("N[%d] = %0.4lf\n",i,N[i]);

	}

	system("PAUSE");
    return 0;
}
