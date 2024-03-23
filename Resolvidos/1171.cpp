#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, count;
    cin >> N;
    vector<int> dados(N);

    for(int a = 0 ; a < N ; a++) {
        cin >> dados[a];
    }

    sort(dados.begin(), dados.end());

    for(int a = 0 ; a < N ; a++) {
        if(dados[a] == 0) {
            continue;
        }
        count = 1;
        for(int b = a + 1 ; b < N ; b++) {
            if(dados[a] == dados[b]) {
                count++;
                dados[b] = 0;
            }
        }
        cout << dados[a] << " aparece " << count << " vez(es)" << endl;
    }
    return 0;
}