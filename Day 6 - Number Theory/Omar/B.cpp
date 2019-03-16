#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    long long res = (n1 % n3 - n2 % n3) % n3;
    while (res < 0) {
        res += n3;
    }
    cout << res;

    return 0;
}
