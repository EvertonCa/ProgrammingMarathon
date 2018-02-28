#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int horas, velocidade;
	double distancia, litros;

    scanf("%d %d",&horas,&velocidade);

    distancia=horas*velocidade;
    litros=distancia/12;

    printf("%0.3lf\n",litros);

	system("PAUSE");
    return 0;
}
