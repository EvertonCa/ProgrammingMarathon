#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double Y, km, X;

    scanf("%lf %lf",&Y,&X);

	km=Y/X;

    printf("%0.3lf km/l\n",km);

	system("PAUSE");
    return 0;
}
