#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int X, Y, i, soma=0;

    scanf("%d %d",&X,&Y);

	if(X>Y)
	{

		for(i=(Y+1); i<X; i=i+1)
		{

			if((i%5==2) || (i%5==3))

       			printf("%d\n",i);

		}

		
	}

		if(Y>X)
	{

		for(i=(X+1); i<Y; i=i+1)
		{

			if((i%5==2) || (i%5==3))

				printf("%d\n",i);

		}

	}

		if(X==Y)
	{
		soma=X-Y;
		printf("%d\n",soma);
	}

	system("PAUSE");
    return 0;
}
