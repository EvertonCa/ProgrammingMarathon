#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double raio, area;

    scanf("%lf",&raio);

    area=3.14159*pow(raio,2);

    printf("A=%0.4lf\n",area);

    system("PAUSE");
    return 0;
}
