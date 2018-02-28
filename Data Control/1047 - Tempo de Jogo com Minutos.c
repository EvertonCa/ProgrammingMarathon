#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int hora1, minuto1, hora2, minuto2, minutos, minutos1, minutos2, horas, minutosFinais;

    scanf("%d %d %d %d",&hora1,&minuto1,&hora2,&minuto2);

	minutos2=(hora2*60)+minuto2;
	minutos1=(hora1*60)+minuto1;
	
	minutos=minutos2-minutos1;
	
	if(hora1==hora2)
	{
		if(minuto1==minuto2)
		{
			horas=24;
			minutosFinais=0;		
		}
		else
		{
			horas=23;
			minutosFinais=60-(minuto1-minuto2);
		}	
		
	}
	
	else if(hora1>hora2)
		{
			minutos1=1440-((hora1*60)+minuto1);
			minutos2=(hora2*60)+minuto2;
			minutos=minutos1+minutos2;
			horas=minutos/60;
			minutosFinais=minutos%60;
			
		}
		
		else
		{
		
			horas=minutos/60;
			minutosFinais=minutos%60;
		
		}
 	
 	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutosFinais);

	system("PAUSE");
    return 0;
}
