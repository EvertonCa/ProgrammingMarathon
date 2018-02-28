#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int X[10], i;

    for(i=0; i<10; i=i+1)
    {
        scanf("%d",&X[i]);

        if(X[i]==0 || X[i]<0)
            X[i]=1;

        printf("X[%d] = %d\n",i,X[i]);

    }

    system("PAUSE");
    return 0;
}
