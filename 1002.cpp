#include <bits/stdc++.h>

using namespace std;

#define pi 3.14159

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double R, result;
    cin >> R;
    result = R * R * pi;
    printf("A=%.4f\n", result);
    return 0;
}