#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, Z, L;
    while(cin >> H >> Z >> L) {
        if( (H > Z && H < L) || (H < Z && H > L) ) {
            cout << "huguinho" << endl;
        } else if( (Z > H && Z < L) || (Z < H && Z > L) ) {
            cout << "zezinho" << endl;
        } else {
            cout << "luisinho" << endl;
        }
    }
    return 0;
}