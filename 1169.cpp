// Estêvão Sousa - 202210345
// Larissa de Brito - 202210349
// Davi Roriz - 202210342
// 1169 - Trigo no tabuleiro
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    long long int saida;
    cin >> N;
    for(int a = 0 ; a < N ; a++) {
        cin >> X;
        saida = (pow(2, X) - 1) / 12000;
        cout << saida << " kg" << endl;
    }
    return 0;
}