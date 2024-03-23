#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int A, B;
    cin >> A >> B;
    cout << (B * (B + 1) / 2) - ((A - 1) * A / 2) << endl;
    return 0;
}