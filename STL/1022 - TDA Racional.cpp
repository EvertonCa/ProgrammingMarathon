#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int GCD(int u, int v) {
    while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    return u;
}

int main(void)
{
    string s1, sinal, s2;
    int n1, d1, n2, d2, quant, i, nFinal, dFinal, nSimplificado, dSimplificado;

    cin>>quant;

    for(i=0; i<quant; i++)
    {
        cin>>n1>>s1>>d1>>sinal>>n2>>s2>>d2;

        if(sinal[0] == '+')
        {
            nFinal = (n1*d2)+(n2*d1);
            dFinal = d1*d2;
        }

        if(sinal[0] == '-')
        {
            nFinal = (n1*d2)-(n2*d1);
            dFinal = d1*d2;
        }

        if(sinal[0] == '*')
        {
            nFinal = (n1*n2);
            dFinal = d1*d2;
        }

        if(sinal[0] == '/')
        {
            nFinal = (n1*d2);
            dFinal = n2*d1;
        }

        nSimplificado = nFinal;
        dSimplificado = dFinal;

        int mdc = GCD(nSimplificado, dSimplificado);

        nSimplificado = nSimplificado / mdc;
        dSimplificado = dSimplificado / mdc;

        if(dSimplificado<0)
        {
            dSimplificado = dSimplificado * (-1);
            nSimplificado = nSimplificado * (-1);
        }

        cout<<nFinal<<"/"<<dFinal<<" = "<<nSimplificado<<"/"<<dSimplificado<<endl;
    }

}
