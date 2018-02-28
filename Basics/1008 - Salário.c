#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int numero, horas;
	double salarioHora, salarioTotal;

    scanf("%d %d %lf",&numero,&horas,&salarioHora);

    salarioTotal=horas*salarioHora;

    printf("NUMBER = %d\n",numero);
    printf("SALARY = U$ %0.2lf\n",salarioTotal);

	system("PAUSE");
    return 0;
}
