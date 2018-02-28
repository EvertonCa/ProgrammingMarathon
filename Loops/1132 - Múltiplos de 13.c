#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int X, Y, i, soma=0;

    scanf("%d %d",&X,&Y);

	if(X>Y)
	{

		for(i=Y; i<=X; i=i+1)
		{

			if(i%13!=0)

				soma=soma+i;

		}

		printf("%d\n",soma);
	}

		if(Y>X)
	{

		for(i=X; i<=Y; i=i+1)
		{

			if(i%13!=0)

				soma=soma+i;

		}

		printf("%d\n",soma);
	}

		if(X==Y)
	{
		soma=X-Y;
		printf("%d\n",soma);
	}

	system("PAUSE");
    return 0;
}
