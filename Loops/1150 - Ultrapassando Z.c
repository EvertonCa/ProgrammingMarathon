#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int X, Z, i, total=0, soma=0;

    scanf("%d %d",&X,&Z);

    while(X>=Z)

        scanf("%d",&Z);
        
	i=X;

 	while(total<=Z)
	{
        total=total+i;
		i=i+1;
		soma=soma+1;
	}

	printf("%d\n",soma);

	system("PAUSE");
    return 0;
}

