#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int A, B;
    while(cin >> A >> B) {
        if(A > B) {
            A ^= B;
            B ^= A;
            A ^= B;
        }
        cout << B - A << endl;
    }
    return 0;
}