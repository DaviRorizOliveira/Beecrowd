#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int vetor[N];
    for(int a = 0 ; a < N ; a++) {
        cin >> vetor[a];
    }
    for(int a = 0 ; a < N ; a++) {
        printf("%.3f\n", (5 * vetor[a] * vetor[a] / (4 * tan(M_PI / 5) ) ) );
    }
    return 0;
}