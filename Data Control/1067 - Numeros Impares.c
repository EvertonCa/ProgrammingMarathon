#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int X, i;

    scanf("%d",&X);

	for(i=1; i<=X; i=i+1)
	{
		
		if(i%2!=0)
		
		printf("%d\n",i);
				
	}
	
	system("PAUSE");
    return 0;
}
