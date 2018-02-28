#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, B, sobra1, sobra2;

    scanf("%d %d",&A,&B);
    
    sobra1=A%B;
    sobra2=B%A;

	if((sobra1==0) || (sobra2==0))
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}
	
	system("PAUSE");
    return 0;
}	
