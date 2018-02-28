#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    double par[5], impar[5], controle=3.1415161;
    int T, metade, i, a, Par=0, Impar=0;

    par[0]=controle;
	par[1]=controle;
	par[2]=controle;
	par[3]=controle;
	par[4]=controle;
	impar[0]=controle;
	impar[1]=controle;
	impar[2]=controle;
	impar[3]=controle;
	impar[4]=controle;

	for(a=0; a<15; a++)
	{

		scanf("%d",&T);

		if(T%2==0 && Par<5)
		{
            par[Par]=T;
            Par=Par+1;
			
		}
		else if(T%2!=0 && Impar<5)
		{
            impar[Impar]=T;
            Impar=Impar+1;
			
		}
		if(T%2==0 && Par==5)
		{
            printf("par[0] = %0.0lf\n",par[0]);
            printf("par[1] = %0.0lf\n",par[1]);
            printf("par[2] = %0.0lf\n",par[2]);
            printf("par[3] = %0.0lf\n",par[3]);
            printf("par[4] = %0.0lf\n",par[4]);
			Par=0;
			par[0]=controle;
			par[1]=controle;
			par[2]=controle;
			par[3]=controle;
			par[4]=controle;
			par[Par]=T;
		}
		if(T%2!=0 && Impar==5)
		{
            printf("impar[0] = %0.0lf\n",impar[0]);
            printf("impar[1] = %0.0lf\n",impar[1]);
            printf("impar[2] = %0.0lf\n",impar[2]);
            printf("impar[3] = %0.0lf\n",impar[3]);
            printf("impar[4] = %0.0lf\n",impar[4]);
			Impar=0;
			impar[0]=controle;
			impar[1]=controle;
			impar[2]=controle;
			impar[3]=controle;
			impar[4]=controle;
			impar[Impar]=T;
		}

	}
	
	for(i=0; i<5; i++)
	{
		if(impar[i]!=controle)
		    printf("impar[%d] = %0.0lf\n",i,impar[i]);
	}
	
 	for(i=0; i<5; i++)
 	
	{
		if(par[i]!=controle)
		    printf("par[%d] = %0.0lf\n",i,par[i]);

	}

	system("PAUSE");
    return 0;
}
