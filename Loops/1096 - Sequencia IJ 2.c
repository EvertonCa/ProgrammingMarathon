#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double i, A=0.8, B=1.8, C=2.8;

		A=A+0.2;
		B=B+0.2;
		C=C+0.2;
		printf("I=0 J=1\n");	
		printf("I=0 J=2\n");
		printf("I=0 J=3\n");	

	for(i=0.2; i<=0.8; i=i+0.2)
	{
		A=A+0.2;
		B=B+0.2;
		C=C+0.2;
		printf("I=%0.1lf J=%0.1lf\n",i,A);	
		printf("I=%0.1lf J=%0.1lf\n",i,B);
		printf("I=%0.1lf J=%0.1lf\n",i,C);	
	}	
	
		A=A+0.2;
		B=B+0.2;
		C=C+0.2;
		printf("I=1 J=2\n");	
		printf("I=1 J=3\n");
		printf("I=1 J=4\n");
		
	for(i=1.2; i<=1.8; i=i+0.2)
	{
		A=A+0.2;
		B=B+0.2;
		C=C+0.2;
		printf("I=%0.1lf J=%0.1lf\n",i,A);	
		printf("I=%0.1lf J=%0.1lf\n",i,B);
		printf("I=%0.1lf J=%0.1lf\n",i,C);	
	}	
	
		A=A+0.2;
		B=B+0.2;
		C=C+0.2;
		printf("I=2 J=3\n");	
		printf("I=2 J=4\n");
		printf("I=2 J=5\n");

	system("PAUSE");
    return 0;
}
