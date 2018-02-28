#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    int n, fatorial = 1;

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        fatorial = fatorial * (n-i);
    }

    cout<<fatorial<<endl;
}
