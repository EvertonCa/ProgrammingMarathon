#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int X, Y, i, soma=0;

    while(scanf("%d %d",&X,&Y) && X!=Y)
	{
		if(X>Y)

			printf("Decrescente\n");

		else
		
		    printf("Crescente\n");

	}

	system("PAUSE");
    return 0;
}
