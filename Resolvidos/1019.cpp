#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, hr, min;
    cin >> N;
    hr = N / 3600;
    N %= 3600;
    min = N / 60;
    N %= 60;
    cout << hr << ":" << min << ":" << N << endl;
    return 0;
}