#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
 {
    double A, B, C, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    scanf("%lf %lf %lf",&A,&B,&C);

	areaTriangulo=A*C/2;
	areaCirculo=3.14159*pow(C,2);
	areaTrapezio=((A+B)*C)/2;
	areaQuadrado=B*B;
	areaRetangulo=A*B;

    printf("TRIANGULO: %0.3lf\n",areaTriangulo);
    printf("CIRCULO: %0.3lf\n",areaCirculo);
    printf("TRAPEZIO: %0.3lf\n",areaTrapezio);
    printf("QUADRADO: %0.3lf\n",areaQuadrado);
    printf("RETANGULO: %0.3lf\n",areaRetangulo);

	system("PAUSE");
    return 0;
}
