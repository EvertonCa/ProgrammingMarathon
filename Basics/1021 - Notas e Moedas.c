#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int notas, moedas, cem, cinquenta, vinte, dez, cinco, dois, um, cents50, cents25, cents10, cents5, cent1, sobra;

    scanf("%d.%d",&notas,&moedas);

	cem=notas/100;
	sobra=notas%100;
	cinquenta=sobra/50;
	sobra=sobra%50;
	vinte=sobra/20;
	sobra=sobra%20;
	dez=sobra/10;
	sobra=sobra%10;
	cinco=sobra/5;
	sobra=sobra%5;
	dois=sobra/2;
	um=sobra%2;
	
	cents50=moedas/50;
	sobra=moedas%50;
	cents25=sobra/25;
	sobra=sobra%25;
	cents10=sobra/10;
	sobra=sobra%10;
	cents5=sobra/5;
	sobra=sobra%5;
	cent1=sobra/1;
	
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",cents50);
    printf("%d moeda(s) de R$ 0.25\n",cents25);
    printf("%d moeda(s) de R$ 0.10\n",cents10);
    printf("%d moeda(s) de R$ 0.05\n",cents5);
    printf("%d moeda(s) de R$ 0.01\n",cent1);

	system("PAUSE");
    return 0;
}
