#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i, segundo=1, terceiro=1;

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
		segundo=i*i;
		terceiro=i*segundo;
		printf("%d %d %d\n",i,segundo,terceiro);
	}

	system("PAUSE");
    return 0;
}
