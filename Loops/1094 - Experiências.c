#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i;
    double X, ratos=0, sapos=0, coelhos=0, soma, propSapos, propRatos, propCoelhos;
    char A[10];

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
		scanf("%lf %s",&X,&A);
		
		if((strcmp(A,"R")==0))
		{
			ratos=ratos+X;
		}
		
		else if((strcmp(A,"S")==0))
		{
			sapos=sapos+X;
		}
		
		else if((strcmp(A,"C")==0))
		{
			coelhos=coelhos+X;
		}
		
	}	
	
	soma=sapos+ratos+coelhos;
	propRatos=(ratos/soma)*100;
	propSapos=(sapos/soma)*100;
	propCoelhos=(coelhos/soma)*100;
	
	printf("Total: %0.0lf cobaias\n",soma);
	printf("Total de coelhos: %0.0lf\n",coelhos);
	printf("Total de ratos: %0.0lf\n",ratos);
	printf("Total de sapos: %0.0lf\n",sapos);
	printf("Percentual de coelhos: %0.2lf %%\n",propCoelhos);
	printf("Percentual de ratos: %0.2lf %%\n",propRatos);
	printf("Percentual de sapos: %0.2lf %%\n",propSapos);
	
	system("PAUSE");
    return 0;
}
