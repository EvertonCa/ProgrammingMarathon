#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, X, Y, alcool=0, gasolina=0, diesel=0;

	do
	{
		scanf("%d",&X);
		
		while(X>4 || X<1 && X!=4)
		    scanf("%d",&X);
		    
		if(X==1)
		    alcool=alcool+1;

		else if(X==2)
		    gasolina=gasolina+1;
		    
		else if(X==3)
		    diesel=diesel+1;

	}while(X!=4);

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcool);
	printf("Gasolina: %d\n",gasolina);
	printf("Diesel: %d\n",diesel);

	system("PAUSE");
    return 0;
}

