#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int idade, meses, anos, dias, sobra;

    scanf("%d",&idade);

	anos=idade/365;
	sobra=idade%365;
	meses=sobra/30;
	dias=sobra%30;

    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);

	system("PAUSE");
    return 0;
}
