#include <bits/stdc++.h>

using namespace std;

#define limite 30000010 // Raiz de 9*10^14 com uma margem de erro a mais (10)
vector<long long int> primo; // Vetor que vai guardar todos os números primos de até 'limite'

void testaPrimos() { // Crivo que pega todos os primos até 'limite' e coloca no vetor 'primo'
    vector<bool> sieve(limite, true);
    for (int a = 2 ; a * a <= limite ; ++a) {
        if (sieve[a]) {
            for (int b = a * a ; b <= limite ; b += a) {
                sieve[b] = false;
            }
        }
    }
    for (int a = 3 ; a <= limite ; ++a) {
        if (sieve[a]) {
            primo.push_back(a);
        }
    }
}

long long int fatora(long long int N) {
    long long int result = 1;
    long long int div = 0;
    for (long long int a = 0 ; a < primo.size() && primo[a] * primo[a] <= N ; a++) {
        div = 0;
        while (N % primo[a] == 0) { // Se N for divisível por primo[a], divide N e adiciona o número aos divisores
            N /= primo[a];
            div++;
        }
        if (div > 0) {
            result *= (div + 1);
        }
    }
    if (N > 1) {
        result *= 2;
    }
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testaPrimos();

    long long int N;
    while (cin >> N) {
        if (N == 0) {
            cout << "0" << endl;
        } else {
            while( !(N & 1) ) {
                N >>= 1;
            }
            if(N < 3) {
                cout << "1" << endl;
            } else {
                cout << fatora(N) << endl;
            }
        }
    }
    return 0;
}