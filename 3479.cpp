#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dia, mes;
    scanf("%d%*c%d", &dia, &mes);
    if(mes == 1) {
        if(dia < 20) cout << "capricornio" << endl;
        else cout << "aquario" << endl;
    } else if(mes == 2) {
        if(dia < 19) cout << "aquario" << endl;
        else cout << "peixes" << endl;
    } else if(mes == 3) {
        if(dia < 21) cout << "peixes" << endl;
        else cout << "aries" << endl;
    } else if(mes == 4) {
        if(dia < 21) cout << "aries" << endl;
        else cout << "touro" << endl;
    } else if(mes == 5) {
        if(dia < 21) cout << "touro" << endl;
        else cout << "gemeos" << endl;
    } else if(mes == 6) {
        if(dia < 21) cout << "gemeos" << endl;
        else cout << "cancer" << endl;
    } else if(mes == 7) {
        if(dia < 23) cout << "cancer" << endl;
        else cout << "leao" << endl;
    } else if(mes == 8) {
        if(dia < 23) cout << "leao" << endl;
        else cout << "virgem" << endl;
    } else if(mes == 9) {
        if(dia < 23) cout << "virgem" << endl;
        else cout << "libra" << endl;
    } else if(mes == 10) {
        if(dia < 23) cout << "libra" << endl;
        else cout << "escorpiao" << endl;
    } else if(mes == 11) {
        if(dia < 22) cout << "escorpiao" << endl;
        else cout << "sagitario" << endl;
    } else {
        if(dia < 22) cout << "sagitario" << endl;
        else cout << "aquario" << endl;
    }
    return 0;
}