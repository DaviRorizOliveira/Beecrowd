#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while (cin >> N) {
        int aux = 1;
        int result = 1;

        while (aux != 0) {
            aux = (aux * 10 + 1) % N;
            result++;
        }
        cout << result << endl;
    }

    return 0;
}