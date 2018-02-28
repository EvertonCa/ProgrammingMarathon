#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, B, C, D, E, par=0, impar=0, positivo=0, negativo=0;

    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);

	if(A%2==0)
		
		par=par+1;
			
	else
		
		impar=impar+1;
	
	if(B%2==0)
		
		par=par+1;
			
	else
		
		impar=impar+1;
		
	if(C%2==0)
		
		par=par+1;
			
	else
		
		impar=impar+1;
		
	if(D%2==0)
		
		par=par+1;
			
	else
		
		impar=impar+1;
		
	if(E%2==0)
		
		par=par+1;
			
	else
		
		impar=impar+1;		


	if(A>0)
		
		positivo=positivo+1;
			
	if(A<0)
		
		negativo=negativo+1;
	
	if(B>0)
		
		positivo=positivo+1;
			
	if(B<0)
		
		negativo=negativo+1;
		
	if(C>0)
		
		positivo=positivo+1;
			
	if(C<0)
		
		negativo=negativo+1;
		
	if(D>0)
		
		positivo=positivo+1;
			
	if(D<0)
		
		negativo=negativo+1;
		
	if(E>0)
		
		positivo=positivo+1;
			
	if(E<0)
		
		negativo=negativo+1;	
		
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impar);
	printf("%d valor(es) positivo(s)\n",positivo);
	printf("%d valor(es) negativo(s)\n",negativo);	


	system("PAUSE");
    return 0;
}
