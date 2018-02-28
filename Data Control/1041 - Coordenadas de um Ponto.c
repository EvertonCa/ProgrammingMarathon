#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double A, B;

    scanf("%lf %lf",&A,&B);

	if(A>0 && B>0)
	
		printf("Q1\n");
		
	if(A>0 && B<0)
	
		printf("Q4\n");
		
	if(A<0 && B>0)
	
		printf("Q2\n");
		
	if(A<0 && B<0)
	
		printf("Q3\n");
		
	if(A==0 && B!=0)
	
		printf("Eixo Y\n");
		
	if(A!=0 && B==0)
	
		printf("Eixo X\n");
		
	if(A==0 && B==0)
	
		printf("Origem\n");
		
	system("PAUSE");
    return 0;
}
