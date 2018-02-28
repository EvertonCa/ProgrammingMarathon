#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int J, i=-2;

	for(J=60; J>=0; J=J-5)
	{
		i=i+3;
		printf("I=%d J=%d\n",i,J);		
	}	

	system("PAUSE");
    return 0;
}
