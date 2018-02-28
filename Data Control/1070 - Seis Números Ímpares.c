#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i;

    scanf("%d",&N);

	if((N%2)==0)
	{
		N=N+1;
	}
	else
	{
		N=N;
	}
	
	for(i=0; i<6; i=i+1)
	{
		printf("%d\n",N);
		N=N+2;
	}

	system("PAUSE");
    return 0;
}
