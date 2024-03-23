#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, result = 0;
    cin >> N;
    float C[N];
    for(int a = 0 ; a < N ; a++) {
        cin >> C[a];
    }
    for(int a = 0 ; a < N ; a++) {
        while(C[a] > 1) {
            C[a] = C[a] / 2;
            result++;
        }
        cout << result << " dias" << endl;
        result = 0;
    }
    return 0;
}