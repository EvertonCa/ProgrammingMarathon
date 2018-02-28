#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int senha=0;

	while(senha!=2002)
	{
		scanf("%d",&senha);

		if(senha==2002)
		{
			printf("Acesso Permitido\n");
		}
		else
		
		    printf("Senha Invalida\n");
	}

	system("PAUSE");
    return 0;
}
