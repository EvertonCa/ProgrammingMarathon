#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    double A, B, C, raiz, r1, r2;

    scanf("%lf %lf %lf",&A,&B,&C);

	raiz=((pow(B,2)-(4*A*C)));

	if((raiz<0) || ((2*A)==0))
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		r1=((-B)+sqrt(raiz))/(2*A);
		r2=((-B)-sqrt(raiz))/(2*A);		
		printf("R1 = %0.5lf\n",r1);
		printf("R2 = %0.5lf\n",r2);
	}
	
	system("PAUSE");
    return 0;
}	
