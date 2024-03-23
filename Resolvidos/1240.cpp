#include <bits/stdc++.h>

using namespace std;

bool confere(string A, string B) {
    long long int diferenca = A.size() - B.size();
    long long int i = diferenca, j = 0;
    while(i < A.size() && j < B.size()) {
        if(A[i] != B[j]) {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string A, B;

    cin >> N;
    for(int a = 0 ; a < N ; a++) {
        cin >> A >> B;
        if(A == B) {
            cout << "encaixa" << endl;
        } else {
            if(B.size() > A.size()) {
                cout << "nao encaixa" << endl;
            } else {
                if(confere(A, B)) {
                    cout << "encaixa" << endl;
                } else {
                    cout << "nao encaixa" << endl;
                }
            }
        }
    }
    return 0;
}