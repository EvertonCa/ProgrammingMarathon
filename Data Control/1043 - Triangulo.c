#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    double A, B, C, perimetro, area;

    scanf("%lf %lf %lf",&A,&B,&C);
    
    if(A>=B && B>=C)
    {
    	if(A<(B+C))
		{
			perimetro=A+B+C;
			printf("Perimetro = %0.1lf\n",perimetro);
		}
		else
		{
			area=((A+B)*C)/2;
			printf("Area = %0.1lf\n",area);
		}
	}
	
    else if (B>=A && A>=C)
    	{
    		if(B<(A+C))
			{
				perimetro=A+B+C;
				printf("Perimetro = %0.1lf\n",perimetro);
			}
			else
			{
				area=((A+B)*C)/2;
				printf("Area = %0.1lf\n",area);
			}
   		}
   		
   		else if (C>=B && B>=A)
   			{
    			if(C<(B+A))
				{
					perimetro=A+B+C;
					printf("Perimetro = %0.1lf\n",perimetro);
				}
				else
				{
					area=((C+B)*A)/2;
					printf("Area = %0.1lf\n",area);
				}
		    }
		    
		    else if(A>=C && C>=B)
				{
    				if(A<(B+C))
					{
						perimetro=A+B+C;
						printf("Perimetro = %0.1lf\n",perimetro);
					}
					else
					{
						area=((A+C)*B)/2;
						printf("Area = %0.1lf\n",area);
					}
				}
				
				else if(B>=C && C>=A)
					{
    					if(B<(A+C))
						{
							perimetro=A+B+C;
							printf("Perimetro = %0.1lf\n",perimetro);
						}
						else
						{
							area=((C+B)*A)/2;
							printf("Area = %0.1lf\n",area);
						}
					}
					
					else if(C>=A && A>=B)
						{
    						if(C<(B+A))
							{
								perimetro=A+B+C;
								printf("Perimetro = %0.1lf\n",perimetro);
							}
							else
							{
								area=((A+C)*B)/2;
								printf("Area = %0.1lf\n",area);
							}
						}

	
	system("PAUSE");
    return 0;
}
