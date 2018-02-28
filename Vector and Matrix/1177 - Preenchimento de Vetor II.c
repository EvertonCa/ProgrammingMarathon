#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N[1000];
    int T, i, j=0;

    scanf("%d",&T);

	for(i=0; i<1000; i++)
	{
        if(j<T)
    	{
			N[i]=j;
		}
		else
		    j=0;
		    
        printf("N[%d] = %d\n",i,N[j]);

		j=j+1;

	}

	system("PAUSE");
    return 0;
}
