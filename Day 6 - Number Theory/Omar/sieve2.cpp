#include <bits/stdc++.h>

using namespace std;

void sieve(int n, bool *isNonPrime) {

    for (int i = 0; i < n; i++) {
        if (i > 1) {
            isNonPrime[i] = false;
        } else {
            isNonPrime[i] = true;
        }
    }

    for (int i = 2; i < n; i++) {
        if (!isNonPrime[i]) {
            for (int j = i + i; j <= n; j+=i) {
                isNonPrime[j] = true;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    bool isNonPrime[n];

    sieve(n, isNonPrime);

    for (int i = 0; i < n; i++) {
        if (!isNonPrime[i]) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
