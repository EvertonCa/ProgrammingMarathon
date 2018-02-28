#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int X, Y, soma=1, i;

    scanf("%d %d",&X,&Y);

	for(i=1; i<=Y; i=i+1)
	{
		if(soma%X!=0)
		{
			printf("%d ",i);
	    	soma=soma+1;
		}
	    else if(soma%X==0)
		{
	        printf("%d\n",i);
	        soma=soma+1;
		}
	}

	system("PAUSE");
    return 0;
}

