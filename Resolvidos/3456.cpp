#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int X;
    cin >> X;
    cout << X << endl;
    while(X > 9) {
        X = (X / 10) * 3 + (X % 10);
        cout << X << endl;
    }
    return 0;
}