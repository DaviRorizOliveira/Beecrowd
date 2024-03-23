#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    while(cin >> l) {
        printf("%.2f\n", ( 2 * l * l * sqrt(3) ) / 5);
    }
    return 0;
}