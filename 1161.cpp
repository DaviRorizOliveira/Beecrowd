#include <bits/stdc++.h>

using namespace std;

long long int fatorial(int N) {
    long long int result = 1;
    if(N == 0) {
        return 1;
    } else {
        for(int a = N ; a > 0 ; a--) {
            result = result * a;
        }
        return result;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    while(cin >> A >> B) {
        cout << fatorial(A) + fatorial(B) << endl;
    }
    return 0;
}