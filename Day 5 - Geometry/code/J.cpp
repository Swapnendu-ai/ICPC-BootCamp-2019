#include <bits/stdc++.h>

using namespace std;

#define EPS 1E-9

bool equal(long double a, long double b) {
    return fabsl(a - b) < EPS;
}

bool lessthan(long double a, long double b) {
    return a + EPS < b;
}
long double det(long double a, long double b, long double c, long double d) {
    return (a * d) - (b * c);
}

int main() {

    setprecision(9);

    int x, y, x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    long double A1 = y1 - y2 ;
    long double B1 = x2 - x1 ;
    long double C1 = - A1 * x1 - B1 * y1;

    

    return 0;
}
