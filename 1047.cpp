#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int hr0, min0, hr1, min1;
    cin >> hr0 >> min0 >> hr1 >> min1;
    if(hr0 == hr1 && min0 == min1) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    } else {
        if(min0 > min1) {
            hr1 -= 1;
            min1 += 60;
        }
        if(hr0 > hr1) {
            hr1 += 24;
        }
        hr1 = hr1 - hr0;
        min1 = min1 - min0;
        cout << "O JOGO DUROU " << hr1 << " HORA(S) E " << min1 << " MINUTO(S)" << endl;
    }
    return 0;
}