#include <bits/stdc++.h>

using namespace std;

bool primo(int num) {
    if(num == 1 || num == 2 || num == 3 || num == 5 || num == 7) {
        return true;
    } else {
        if(num % 2 == 0) {
            return false;
        } else {
            int p = 3;
            bool q = true;
            while((p * p <= num) && p) {
                if(num % p == 0) {
                    q = false;
                }
                p = p + 2;
            }
            if(q) {
                return true;
            } else {
                return false;
            }
        }
    }
}

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
        if(primo(vetor[a])) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}