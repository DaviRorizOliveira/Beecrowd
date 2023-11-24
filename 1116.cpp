#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    float result, X, Y;
    cin >> N;
    while(N--) {
        cin >> X >> Y;
        if(Y == 0.0) {
            printf("divisao impossivel\n");
        } else {
            result = X / Y;
            printf("%.1f\n", result);
        }
    }
    return 0;
}