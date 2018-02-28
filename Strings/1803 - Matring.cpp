#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{
    string primeiraLinha, segundaLinha, terceiraLinha, quartaLinha, primeiraColuna, ultimaColuna, palavra, palavraFinal;
    int quant, i, j, numeroPrimeiraColuna, numeroUltimaColuna, numero, caractere;

    cin>>primeiraLinha>>segundaLinha>>terceiraLinha>>quartaLinha;

    quant = primeiraLinha.size();


    primeiraColuna += primeiraLinha[0];
    primeiraColuna += segundaLinha[0];
    primeiraColuna += terceiraLinha[0];
    primeiraColuna += quartaLinha[0];
    ultimaColuna += primeiraLinha[quant-1];
    ultimaColuna += segundaLinha[quant-1];
    ultimaColuna += terceiraLinha[quant-1];
    ultimaColuna += quartaLinha[quant-1];

    numeroPrimeiraColuna = (primeiraColuna[0] - '0') *1000;
    numeroPrimeiraColuna = numeroPrimeiraColuna + ((primeiraColuna[1] - '0') *100);
    numeroPrimeiraColuna = numeroPrimeiraColuna + ((primeiraColuna[2] - '0') *10);
    numeroPrimeiraColuna = numeroPrimeiraColuna + ((primeiraColuna[3] - '0'));

    numeroUltimaColuna = (ultimaColuna[0] - '0') *1000;
    numeroUltimaColuna = numeroUltimaColuna + ((ultimaColuna[1] - '0') *100);
    numeroUltimaColuna = numeroUltimaColuna + ((ultimaColuna[2] - '0') *10);
    numeroUltimaColuna = numeroUltimaColuna + ((ultimaColuna[3] - '0'));


    for (j=0; j<(quant-2); j++)
    {
        palavra += primeiraLinha[j+1];
        palavra += segundaLinha[j+1];
        palavra += terceiraLinha[j+1];
        palavra += quartaLinha[j+1];

        numero = (palavra[0] - '0') *1000;
        numero = numero + ((palavra[1] - '0') *100);
        numero = numero + ((palavra[2] - '0') *10);
        numero = numero + ((palavra[3] - '0'));

        numero = (numeroPrimeiraColuna*numero+numeroUltimaColuna)%257;

        palavraFinal += numero;
        palavra.clear();


    }

    cout<<palavraFinal<<endl;


}
