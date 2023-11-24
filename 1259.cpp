#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, num;
    vector<int> impar, par;
    cin >> N;

    for(int a = 0 ; a < N ; a++) {
        cin >> num;
        if(num & 1) {
            impar.push_back(num);
        } else {
            par.push_back(num);
        }
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());
    
    for(int a = 0 ; a < par.size() ; a++) {
        printf("%d\n", par[a]);
    }
    for(int a = 0 ; a < impar.size() ; a++) {
        printf("%d\n", impar[a]);
    }
    return 0;
}