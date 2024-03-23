#include <bits/stdc++.h>

using namespace std;

#define PI 3.1415

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int R, L, result;
    cin >> R >> L;
    result = L / ( 1.333333 * PI * R * R * R );
    cout << result << endl;
    return 0;
}