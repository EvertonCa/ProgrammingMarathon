#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double A, B, total;

    scanf("%lf %lf",&A,&B);

	if(A==1)

		A=4.00;

	else if(A==2)

			A=4.50;

		else if(A==3)
		    
		        A=5;
		        
			else if(A==4)
			    
			        A=2;
			        
				else A=1.50;
				    
	total=A*B;

	printf("Total: R$ %0.2lf\n",total);

	system("PAUSE");
    return 0;
}
