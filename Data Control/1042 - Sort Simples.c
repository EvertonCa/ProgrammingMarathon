#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    int A, B, C;

    scanf("%d %d %d",&A,&B,&C);
    
    if(A>=B && B>=C)
    {
		printf("%d\n",C);
		printf("%d\n",B);
		printf("%d\n",A);
		printf("\n");
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
	}
	
    if (B>=A && A>=C)
    {
		printf("%d\n",C);
		printf("%d\n",A);
		printf("%d\n",B);
		printf("\n");
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
   	}
   		
   	if (C>=B && B>=A)
   	{
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
		printf("\n");
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
	}
		    
	if(A>=C && C>=B)
	{
		printf("%d\n",B);
		printf("%d\n",C);
		printf("%d\n",A);
		printf("\n");
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
	}
				
	if(B>=C && C>=A)
	{
		printf("%d\n",A);
		printf("%d\n",C);
		printf("%d\n",B);
		printf("\n");
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
	}
					
	if(C>=A && A>=B)
	{
		printf("%d\n",B);
		printf("%d\n",A);
		printf("%d\n",C);
		printf("\n");
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
	}
	
	system("PAUSE");
    return 0;
}
