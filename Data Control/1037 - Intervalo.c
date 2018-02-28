#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double X;

    scanf("%lf",&X);

	if(X>=0 && X<=25)
	
		printf("Intervalo [0,25]\n");
		
	if(X>25 && X<=50)
	
		printf("Intervalo (25,50]\n");
		
	if(X>50 && X<=75)
	
		printf("Intervalo (50,75]\n");
		
	if(X>75 && X<=100)
	
		printf("Intervalo (75,100]\n");
		
	if(X>100 || X<0)
	
		printf("Fora de intervalo\n");
		
	
	system("PAUSE");
    return 0;
}
