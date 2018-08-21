#include <math.h>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

vector <long long int> primos;
vector <long long int> fatorais;

void encontraPrimos()
{
    long long int valor = 31623;
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    vector <bool> prime(valor, true);

    for (long long int p=2; p*p<=valor; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (long long int i=p*2; i<=valor; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (long long int p=2; p<=valor; p++)
        if (prime[p])
            primos.push_back(p);
}

void fatorando(long long int valor)
{
    for (long long int i = 0; i < primos.size(); ++i)
    {
        while(valor % primos[i] == 0)
        {
            fatorais.push_back(primos[i]);
            valor = valor / primos[i];
        }
        if(valor == 0)
            break;
    }

    fatorais.push_back(valor);
}

long long int encontraValor(long long int valor)
{
    long long int multiplicador = 1;

    for (int i = 0; i < fatorais.size(); ++i)
    {
        if(fatorais[i] == fatorais[i+1] && i+1 < fatorais.size())
        {
            i++;
        }
        else
        {
            multiplicador *= fatorais[i];
        }
    }
    return multiplicador;
}

int main()
{

    int testes;
    encontraPrimos();

    cin >> testes;

    for (int i = 0; i < testes; ++i)
    {
        long long  int valor;

        cin >> valor;

        fatorando(valor);

        cout << "Caso #" << i+1 << ": " << encontraValor(valor)*valor << endl;

        fatorais.clear();
    }

    return 0;

}