#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
 {

	int m[40], N, i;
    
	scanf("%d",&N);
	m[0]=0;
	m[1]=1;
	if(N==1)
		cout<<m[0]<<endl;
		
	else if(N==2)
		cout<<m[0]<<" "<<m[1]<<endl;
		
	else
	{
		cout<< m[0] <<" "<<m[1];
		for(i=2; i<N; i++)
		{	
			m[i]=m[i-1]+m[i-2];
			cout<<" "<<m[i];
		}
		cout<<endl;
	}
	system("PAUSE");
    return 0;
}
