#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    double raio, volume;

    scanf("%lf",&raio);

	volume=3.14159*pow(raio,3)*(4/3.0);

    printf("VOLUME = %0.3lf\n",volume);

	system("PAUSE");
    return 0;
}
