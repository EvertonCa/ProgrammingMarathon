#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, i, resultado=0;

    scanf("%d",&N);

    for(i=1; i<=10; i=i+1)
    {
        resultado=i*N;
        printf("%d x %d = %d\n",i,N,resultado);

    }

    system("PAUSE");
    return 0;
}
