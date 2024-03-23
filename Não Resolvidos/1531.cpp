// RUNTIME ERROR !!!
#include <bits/stdc++.h>

using namespace std;

//vector<int> Fib = {1, 2};
//while(Fib.size() < 23) {
//    int a = Fib[Fib.size() - 1] + Fib[Fib.size() - 2];
//    Fib.push_back(a);
//}

unsigned long int fibonacci(unsigned long long int N) {
    if (N <= 1) {
        return N;
    }

    vector<unsigned long long int> fib(N + 1, 0);
    fib[1] = 1;

    for (unsigned long long int a = 2 ; a <= N ; a++) {
        fib[a] = fib[a - 1] + fib[a - 2];
    }

    return fib[N];
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int N, M;
    while(scanf("%lld %lld", &N, &M) != EOF) {
        N = fibonacci(N);
        N = fibonacci(N);
        cout << N % M << endl;
    }
    return 0;
}