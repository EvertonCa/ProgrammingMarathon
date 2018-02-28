#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string aux, auxCompleto, completo, completoNovo, linha;
    int i, j, k, l, m, n1, n2, n3, n4, quant, tamanhoCompleto;

    while((cin >> n1 >> n2) && n1!=0 && n2!=0)
    {
        for(i=0; i<=n2; i++)
        {
            getline(cin, aux);
            completo += aux;
        }

        cin>>n3>>n4;

        quant=completo.size();

        for(k=0; k<quant; k++)
        {
            for(l=0; l<(n4/n2); l++)
            {
                auxCompleto += completo[k];
            }
            if((k+1)%n2==0)
            {
                for(j=0; j<(n3/n1); j++)
                    completoNovo += auxCompleto;

                auxCompleto.clear();
            }
        }

        m=0;

        tamanhoCompleto = completoNovo.size();

        while(m<tamanhoCompleto)
        {
            while(((m+1)%n4)!=0)
            {
                linha += completoNovo[m];
                m++;
            }
            linha += completoNovo[m];
            cout<<linha<<endl;
            linha.clear();
            m++;
        }

        cout<<endl;
        completoNovo.clear();
        auxCompleto.clear();
        aux.clear();
        completo.clear();
        linha.clear();
    }

}
