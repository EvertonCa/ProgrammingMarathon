#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A, B, C, D, soma1, soma2, par;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    soma1=C+D;
    soma2=A+B;
    par=A%2;
    if(B>C && D>A && soma1>soma2 && C>0 && D>0 && par==0)

        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    system("PAUSE");
    return 0;
}
