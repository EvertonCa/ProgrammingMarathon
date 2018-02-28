#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int N, i;
    double X, Y, Z, media;

    scanf("%d",&N);

	for(i=1; i<=N; i=i+1)
	{
		scanf("%lf %lf %lf",&X,&Y,&Z);
		
		media=((X*2)+(Y*3)+(Z*5))/10;
		
		printf("%0.1lf\n",media);
		
	}	
	
	system("PAUSE");
    return 0;
}
