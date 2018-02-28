#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double X, oito, dezoito, vinteOito, total;

    scanf("%lf",&X);

	if(X>=0 && X<=2000.00)
	{

		printf("Isento\n");
	}
	
	if(X>=2000.01 && X<=3000.00)
	{
		oito=X-2000;
		total=oito*0.08;
		printf("R$ %0.2lf\n",total);
	}
	
	if(X>=3000.01 && X<=4500.00)
	{
		oito=1000*0.08;
		dezoito=X-3000;
		total=oito+(dezoito*0.18);
		printf("R$ %0.2lf\n",total);
	}
	
	if(X>4500.00)
	{
		oito=1000*0.08;
		dezoito=1500*0.18;
		vinteOito=X-4500;
		total=oito+dezoito+(vinteOito*0.28);
		printf("R$ %0.2lf\n",total);
	}
	
	system("PAUSE");
    return 0;
}
