#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, B, C, D, E, contador;

    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);

	if((A%2)==0)
	{
		
		contador=contador+1;
		
	}
	if((B%2)==0)
	{
		
		contador=contador+1;
		
	}
	if((C%2)==0)
	{
		
		contador=contador+1;
		
	}
	if((D%2)==0)
	{
		
		contador=contador+1;
		
	}
	if((E%2)==0)
	{
		
		contador=contador+1;
		
	}	
	
	printf("%d valores pares\n",contador);
	
	system("PAUSE");
    return 0;
}
