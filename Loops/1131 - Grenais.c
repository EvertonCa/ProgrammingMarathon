#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A=1, X, Y, inter=0, gremio=0, empate=0, total;

	do{
		scanf("%d %d",&X,&Y);
		
		if(A!=2)
		{
			if(X>Y)
            	inter=inter+1;
			
			else if(Y>X)
			    gremio=gremio+1;
			    
			else if(X==Y)
			    empate=empate+1;
			    
	   		printf("Novo grenal (1-sim 2-nao)\n");

			scanf("%d",&A);
		}
	}while(A!=2);

	total=inter+gremio+empate;

	printf("%d grenais\n",total);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",empate);
	
	if(inter>gremio)
	    printf("Inter venceu mais\n");
	    
	else if(gremio>inter)
	    printf("Gremio venceu mais\n");
	    
	else if(inter==gremio)
	    printf("Nao houve vencedor\n");

	system("PAUSE");
    return 0;
}

