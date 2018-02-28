#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double m[12][12], soma=0, media;
    int L, i, j;
    char T[2];

    scanf("%d",&L);
    scanf("%s",T);

    for(i=0; i<12; i++)
	{
        for(j=0; j<12; j++)
        {
            scanf("%lf",&m[i][j]);
		}
	}
	if (strcmp(T,"S")==0)
	{
		for(i=0; i<12; i++)
		    soma=soma+m[i][L];

        printf("%0.1lf\n",soma);

	}

	else if(strcmp(T,"M")==0)
	{
        for(i=0; i<12; i++)
		    soma=soma+m[i][L];

		media=soma/12;
		printf("%0.1lf\n",media);
	}

	system("PAUSE");
    return 0;
}
