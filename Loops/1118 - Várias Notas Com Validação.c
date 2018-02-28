#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double A, X, Y, media;

	do{

	do
	{
		scanf("%lf",&X);
		if(X>10 || X<0)
		    printf("nota invalida\n");

	}while(X>10 || X<0);

	do
	{
		scanf("%lf",&Y);
		if(Y>10 || Y<0)
		    printf("nota invalida\n");

	}while(Y>10 || Y<0);

	media=(X+Y)/2;

	printf("media = %0.2lf\n",media);
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%lf",&A);
	
	while(A>2 || A<1){
        printf("novo calculo (1-sim 2-nao)\n");
	    scanf("%lf",&A);
	}

	}while(A==1);

	system("PAUSE");
    return 0;
}

