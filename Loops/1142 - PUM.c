#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i, primeiro=1, segundo=2, terceiro=3;

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
		printf("%d %d %d PUM\n",primeiro,segundo,terceiro);
		primeiro=primeiro+4;
		segundo=segundo+4;
		terceiro=terceiro+4;
	}

	system("PAUSE");
    return 0;
}

