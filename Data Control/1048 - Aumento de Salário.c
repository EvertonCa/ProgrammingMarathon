#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double X, novoSalario, reajuste;

    scanf("%lf",&X);

	if(X>=0 && X<=400.00)
	{
		reajuste=X*0.15;
		novoSalario=X+reajuste;
		printf("Novo salario: %0.2lf\n",novoSalario);
		printf("Reajuste ganho: %0.2lf\n",reajuste);
		printf("Em percentual: 15 %%\n");
	}
	
	if(X>=400.01 && X<=800.00)
	{
		reajuste=X*0.12;
		novoSalario=X+reajuste;
		printf("Novo salario: %0.2lf\n",novoSalario);
		printf("Reajuste ganho: %0.2lf\n",reajuste);
		printf("Em percentual: 12 %%\n");
	}
	
	if(X>=800.01 && X<=1200.00)
	{
		reajuste=X*0.10;
		novoSalario=X+reajuste;
		printf("Novo salario: %0.2lf\n",novoSalario);
		printf("Reajuste ganho: %0.2lf\n",reajuste);
		printf("Em percentual: 10 %%\n");
	}
	
	if(X>=1200.01 && X<=2000.00)
	{
		reajuste=X*0.07;
		novoSalario=X+reajuste;
		printf("Novo salario: %0.2lf\n",novoSalario);
		printf("Reajuste ganho: %0.2lf\n",reajuste);
		printf("Em percentual: 7 %%\n");
	}
	
	if(X>2000.00)
	{
		reajuste=X*0.04;
		novoSalario=X+reajuste;
		printf("Novo salario: %0.2lf\n",novoSalario);
		printf("Reajuste ganho: %0.2lf\n",reajuste);
		printf("Em percentual: 4 %%\n");
	}

	system("PAUSE");
    return 0;
}
