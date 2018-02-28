#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    double A, B, C;

    scanf("%lf %lf %lf",&A,&B,&C);
    
    if(A>=B && B>=C)
    {
		if(A>=(B+C))
	
			printf("NAO FORMA TRIANGULO\n");
	
		else if((pow(A,2))==((pow(B,2))+(pow(C,2))))
			
				printf("TRIANGULO RETANGULO\n");
			
			else if((pow(A,2))>((pow(B,2))+(pow(C,2))))
			
				printf("TRIANGULO OBTUSANGULO\n");
				
				else if((pow(A,2))<((pow(B,2))+(pow(C,2))))
			
					printf("TRIANGULO ACUTANGULO\n");
	}
	
    else if (B>=A && A>=C)
    	{
			if(B>=(A+C))

				printf("NAO FORMA TRIANGULO\n");
	
			else if((pow(B,2))==((pow(A,2))+(pow(C,2))))
			
					printf("TRIANGULO RETANGULO\n");
			
				else if((pow(B,2))>((pow(A,2))+(pow(C,2))))
			
					printf("TRIANGULO OBTUSANGULO\n");
				
					else if((pow(B,2))<((pow(A,2))+(pow(C,2))))
			
						printf("TRIANGULO ACUTANGULO\n");
   		}
   		
   		else if (C>=B && B>=A)
   			{
				if(C>=(B+A))
				
					printf("NAO FORMA TRIANGULO\n");

				else if((pow(C,2))==((pow(B,2))+(pow(A,2))))
			
						printf("TRIANGULO RETANGULO\n");
			
					else if((pow(C,2))>((pow(B,2))+(pow(A,2))))
			
						printf("TRIANGULO OBTUSANGULO\n");
				
						else if((pow(C,2))<((pow(B,2))+(pow(A,2))))
			
							printf("TRIANGULO ACUTANGULO\n");
		    }
		    
		    else if(A>=C && C>=B)
				{
					if(A>=(B+C))
	
						printf("NAO FORMA TRIANGULO\n");
	
					else if((pow(A,2))==((pow(B,2))+(pow(C,2))))
			
							printf("TRIANGULO RETANGULO\n");
			
						else if((pow(A,2))>((pow(B,2))+(pow(C,2))))
			
							printf("TRIANGULO OBTUSANGULO\n");
				
							else if((pow(A,2))<((pow(B,2))+(pow(C,2))))
			
								printf("TRIANGULO ACUTANGULO\n");
				}
				
				else if(B>=C && C>=A)
					{
						if(B>=(A+C))

							printf("NAO FORMA TRIANGULO\n");

						else if((pow(B,2))==((pow(A,2))+(pow(C,2))))
			
								printf("TRIANGULO RETANGULO\n");
			
							else if((pow(B,2))>((pow(A,2))+(pow(C,2))))
			
								printf("TRIANGULO OBTUSANGULO\n");
				
								else if((pow(B,2))<((pow(A,2))+(pow(C,2))))
			
									printf("TRIANGULO ACUTANGULO\n");
					}
					
					else if(C>=A && A>=B)
						{
							if(C>=(B+A))

								printf("NAO FORMA TRIANGULO\n");

							else if((pow(C,2))==((pow(B,2))+(pow(A,2))))
			
									printf("TRIANGULO RETANGULO\n");
			
								else if((pow(C,2))>((pow(B,2))+(pow(A,2))))
			
									printf("TRIANGULO OBTUSANGULO\n");
				
									else if((pow(C,2))<((pow(B,2))+(pow(A,2))))
			
										printf("TRIANGULO ACUTANGULO\n");
						}

				
	if(A==B && B==C)
		
		printf("TRIANGULO EQUILATERO\n");
		
		else if(A==B || A==C || B==C)
		
			printf("TRIANGULO ISOSCELES\n");
	
	system("PAUSE");
    return 0;
}
