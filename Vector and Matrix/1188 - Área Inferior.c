#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double m[12][12], soma=0, media;
    int i, j;
    char T[2];

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
		{
            for(j=0; j<12; j++)
        	{
				if(j>(11-i) && j<i)
				   soma=soma+m[i][j];
			}
		}

        printf("%0.1lf\n",soma);

	}

	else if(strcmp(T,"M")==0)
	{
        for(i=0; i<12; i++)
		{
            for(j=0; j<12; j++)
        	{
				if(j>(11-i) && j<i)
				   soma=soma+m[i][j];
			}
		}

		media=soma/30;
		printf("%0.1lf\n",media);
	}

	system("PAUSE");
    return 0;
}
