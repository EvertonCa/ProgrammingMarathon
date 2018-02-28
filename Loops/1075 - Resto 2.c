#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i;

    scanf("%d",&N);

	for(i=1; i<=10000; i=i+1)
	{
		if(i%N==2)
				
			printf("%d\n",i);
		
	}	

	system("PAUSE");
    return 0;
}
