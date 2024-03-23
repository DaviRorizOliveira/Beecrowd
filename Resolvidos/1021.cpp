#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double N;
    int x;
    double valores[13] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.0099};

    cin >> N;

    printf("NOTAS:\n");
    for (int aux = 0; aux < 6; aux++) {
        x = N / valores[aux];
        printf("%d nota(s) de R$ %.2f\n", x, valores[aux]);
        N -= x * valores[aux];
    }

    printf("MOEDAS:\n");
    for (int aux = 6; aux < 12; aux++) {
        x = N / valores[aux];
        printf("%d moeda(s) de R$ %.2f\n", x, valores[aux]);
        N -= x * valores[aux];
    }

    return 0;
}