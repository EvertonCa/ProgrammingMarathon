#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double A=1, B=1;

    do
	{
    	scanf("%lf %lf",&A,&B);

		if(A>0 && B>0)

			printf("primeiro\n");

		if(A>0 && B<0)

			printf("quarto\n");

		if(A<0 && B>0)

			printf("segundo\n");

		if(A<0 && B<0)

			printf("terceiro\n");

	}while(A!=0 && B!=0);
	
	system("PAUSE");
    return 0;
}
