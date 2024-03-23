#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int x;
    int valores[7] = {100, 50, 20, 10, 5, 2, 1};

    cin >> N;

    cout << N << endl;
    for(int aux = 0 ; aux < 7 ; aux++) {
        x = N / valores[aux];
        cout << x << " nota(s) de R$ " << valores[aux] << ",00" << endl;
        N %= valores[aux];
    }
    return 0;
}