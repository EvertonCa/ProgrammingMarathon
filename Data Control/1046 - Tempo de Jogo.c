#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int h1, h2, soma;

    scanf("%d %d",&h1,&h2);

	if(h1>h2)
	
		soma=(24-h1)+h2;
	
	if(h2>h1)
	
		soma=h2-h1;
		
	if(h1==h2)
	
		soma=24;

	printf("O JOGO DUROU %d HORA(S)\n",soma);
	
	system("PAUSE");
    return 0;
}
