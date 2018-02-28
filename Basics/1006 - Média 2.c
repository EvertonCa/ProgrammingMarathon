#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double A, B, C, media;

    scanf("%lf %lf %lf",&A,&B,&C);

    media=((A*2)+(B*3)+(C*5))/10;

    printf("MEDIA = %0.1lf\n",media);

	system("PAUSE");
    return 0;
}
