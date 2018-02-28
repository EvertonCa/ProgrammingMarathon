#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, horas, minutos, segundos;

    scanf("%d",&N);

    horas=N/3600;
    minutos=(N%3600)/60;
    segundos=(N%3600)%60;

    printf("%d:%d:%d\n",horas,minutos,segundos);

	system("PAUSE");
    return 0;
}
