#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char nome[200];
	double salario, vendas, total;

	gets(nome);
    scanf("%lf %lf",&salario,&vendas);

	total=salario+(vendas*0.15);

    printf("TOTAL = R$ %0.2lf\n",total);

	system("PAUSE");
    return 0;
}
