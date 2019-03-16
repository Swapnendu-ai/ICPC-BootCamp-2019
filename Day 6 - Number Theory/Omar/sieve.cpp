#include <bits/stdc++.h>

using namespace std;

void sieve(int n, bool* A) {
    for (int i = 2; i < sqrt(n); i++) {
        int cnt = 0;
        if (A[i]) {
            int ind = (i * i) + (cnt * i);
            while (ind < n) {
                A[ind] = false;
                cnt++;
                ind = (i * i) + (cnt * i);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    bool A[n];
    for (int i = 0; i < n; i++) {
        if (i < 2) {
            A[i] = false;
        } else {
            A[i] = true;
        }
    }
    sieve(n, A);
    for (int i = 0; i < n; i++) {
        if (A[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
