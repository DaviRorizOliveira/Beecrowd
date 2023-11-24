#include <bits/stdc++.h>

using namespace std;

long long int calls;

long long int fibonacci(int n) {
    calls++;
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    long long int result;
    cin >> N;
    while(N--) {
        calls = 0;
        cin >> X;
        result = fibonacci(X);
        cout << "fib(" << X << ") = " << calls - 1 << " calls = " << result << endl;
    }
    return 0;
}