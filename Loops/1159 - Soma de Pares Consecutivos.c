#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double X, Y, res;
    int N, i;
    
    scanf("%d",&N);

    for(i=1; i<=N; i=i+1)
	{
		scanf("%lf %lf",&X,&Y);

		if(Y!=0)
			{
				res=X/Y;
				printf("%0.1lf\n",res);
			}
			else
			{
				printf("disisao impossivel\n");
			}
	}

	system("PAUSE");
    return 0;
}
