// WRONG ANSWER (5%) !!!
#include <bits/stdc++.h>

using namespace std;

bool bissexto(long double N) {
    if( (int)fmod(N, 400) == 0 || ( (int)fmod(N, 4) == 0 && (int)fmod(N, 100) != 0 ) ) {
        return true;
    }
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long double N;
    bool bis, hul;
    while(cin >> N) {
        hul = false;
        bis = bissexto(N);
        if(bis) {
            cout << "This is leap year." << endl;
        }
        if((int)fmod(N, 15) == 0) {
            hul = true;
            cout << "This is huluculu festival year." << endl;
        }
        if(bis && (int)fmod(N, 55) == 0) {
            cout << "This is bulukulu festival year." << endl;
        }
        if(!bis && !hul) {
            cout << "This is an ordinary year." << endl;
        }
        if(!cin.eof()) {
            cout << endl;
        }
    }
    return 0;
}