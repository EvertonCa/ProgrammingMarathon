#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i, X;

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
		scanf("%d",&X);
		
		if(X>0 && (X%2==0))
				
			printf("EVEN POSITIVE\n");
		
		else if((X>0) && (X%2!=0))
		
			printf("ODD POSITIVE\n");
			
		else if((X<0) && (X%2==0))
		
			printf("EVEN NEGATIVE\n");
			
		else if((X<0) && (X%2!=0))
		
			printf("ODD NEGATIVE\n");
			
		else if((X==0))
		
			printf("NULL\n");
		
	}	

	system("PAUSE");
    return 0;
}
