#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int dia1, hora1, minuto1, segundo1, dia2, hora2, minuto2, segundo2, dias, horas, minutos, segundos, segundos1, segundos2, segundosFinais;


	scanf("Dia %d",&dia1);
    scanf("%d : %d : %d\n",&hora1,&minuto1,&segundo1);

	scanf("Dia %d",&dia2);
    scanf("%d : %d : %d",&hora2,&minuto2,&segundo2);

	segundos2=(dia2*86400)+(hora2*3600)+(minuto2*60)+segundo2;
	segundos1=(dia1*86400)+(hora1*3600)+(minuto1*60)+segundo1;
	
	segundos=segundos2-segundos1;
	
	dias=segundos/86400;
	horas=(segundos%86400)/3600;
	minutos=((segundos%86400)%3600)/60;
	segundosFinais=(((segundos%86400)%3600)%60);

	printf("%d dia(s)\n",dias);
	printf("%d hora(s)\n",horas);
	printf("%d minuto(s)\n",minutos);
	printf("%d segundo(s)\n",segundosFinais);
	
	system("PAUSE");
    return 0;
}
