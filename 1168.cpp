#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, cont;
    vector<string> vetor;
    string str;
    char c;

    cin >> N;
    for(int a = 0 ; a < N ; a++) {
        cin >> str;
        vetor.push_back(str);
    }
    for(int a = 0 ; a < N ; a++) {
        cont = 0;
        for(int b = 0 ; b < vetor[a].size() ; b++) {
            c = vetor[a][b];
            if(c == '0' || c == '9' || c == '6') cont = cont + 6;
            else if(c == '1') cont = cont + 2;
            else if(c == '2' || c == '3' || c == '5') cont = cont + 5;
            else if(c == '4') cont = cont + 4;
            else if(c == '7') cont = cont + 3;
            else if(c == '8') cont = cont + 7;
        }
        cout << cont << " leds" << endl;
    }
    return 0;
}