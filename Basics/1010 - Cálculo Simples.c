#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int p1, p2, n1, n2;
	double valor1, valor2, total;

    scanf("%d %d %lf",&p1,&n1,&valor1);
    scanf("%d %d %lf",&p2,&n2,&valor2);

    total=(n1*valor1)+(n2*valor2);

    printf("VALOR A PAGAR: R$ %0.2lf\n",total);

	system("PAUSE");
    return 0;
}
