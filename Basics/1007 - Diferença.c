#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int A, B, C, D, diferenca;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    diferenca=((A*B)-(C*D));

    printf("DIFERENCA = %d\n",diferenca);

	system("PAUSE");
    return 0;
}
