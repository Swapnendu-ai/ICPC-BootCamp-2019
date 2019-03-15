#include <bits/stdc++.h>

using namespace std;

#define EPS 1E-9

bool equal(long double a, long double b) {
    return fabsl(a - b) < EPS;
}

bool lessthan(long double a, long double b) {
    return a + EPS < b;
}

int main() {
    long double x1, y1, x2, y2;
    long double k;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> k;

    printf("%.9Lf %.9Lf", (((fabsl(x2 - x1)) * k) / (k + 1)) + min(x1, x2), (fabsl(y2 - y1) * (k / (k + 1))) + min(y1, y2));

    return 0;
}

