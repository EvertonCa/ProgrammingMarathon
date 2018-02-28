#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int notas, cem, cinquenta, vinte, dez, cinco, dois, um, sobra;

    scanf("%d",&notas);

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

    printf("%d\n",notas);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",um);

	system("PAUSE");
    return 0;
}
