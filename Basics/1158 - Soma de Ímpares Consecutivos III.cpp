#include <iomanip>
#include <iostream>
using namespace std;

int main(void)
{
    int j;
    float soma=0, i=1;

    cout<<fixed<<setprecision(2);

    for (j = 1; j <= 39; j=j+2)
    {
        soma = soma + (j/i);
        i = i*2;

    }

    cout<<soma<<endl;
}
