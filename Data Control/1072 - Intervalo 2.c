#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i, X, in=0, out=0;

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
		scanf("%d",&X);
		
		if(X>=10 && X<=20)
				
			in=in+1;
		
		else
		
			out=out+1;
		
	}	

	printf("%d in\n",in);	
	printf("%d out\n",out);
	
	system("PAUSE");
    return 0;
}
