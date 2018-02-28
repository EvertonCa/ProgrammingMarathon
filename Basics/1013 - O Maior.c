#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, B, C, maiorAB, maior;

    scanf("%d %d %d",&A,&B,&C);

    maiorAB=(A+B+abs(A-B))/2;
    maior=(maiorAB+C+abs(maiorAB-C))/2;

    printf("%d eh o maior\n",maior);

	system("PAUSE");
    return 0;
}
