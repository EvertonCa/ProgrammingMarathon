#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double A, B, C, D, E, F, soma, media;
    int contador;

    scanf("%lf %lf %lf %lf %lf %lf",&A,&B,&C,&D,&E,&F);

	if(A>0)
	{
		
		contador=contador+1;
		soma=soma+A;
		
	}
	if(B>0)
	{
		
		contador=contador+1;
		soma=soma+B;
		
	}
	if(C>0)
	{
		
		contador=contador+1;
		soma=soma+C;
		
	}
	if(D>0)
	{
		
		contador=contador+1;
		soma=soma+D;
		
	}
	if(E>0)
	{
		
		contador=contador+1;
		soma=soma+E;
		
	}
	if(F>0)
	{
		
		contador=contador+1;
		soma=soma+F;
		
	}	
	
	media=soma/contador;
	
	printf("%d valores positivos\n",contador);
	printf("%0.1lf\n",media);
	
	system("PAUSE");
    return 0;
}
