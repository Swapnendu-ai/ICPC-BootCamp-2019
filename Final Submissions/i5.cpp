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

    setprecision(3);

    long double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    long double A1 = y1 - y2 ;
    long double B1 = x2 - x1 ;
    long double C1 = - A1 * x1 - B1 * y1;
    long double A2 = y3 - y4;
    long double B2 = x4 - x3 ;
    long double C2 = - A2 * x3 - B2 * y3;

    if (equal(A1 * B2, A2 * B1)) {
        if (equal(det(A1, B1, A2, B2), 0.0) && equal(det(C1, B1, C2, B2), 0.0) && equal(det(A1, C1, A2, C2), 0.0)) {
            cout << 2;
            exit(0);
        }
        cout << 0;
        exit(0);
    }

    cout << 1 << endl;

    printf("%.9Lf %.9Lf", -det(C1,B1,C2,B2)/det(A1,B1,A2,B2), -det(A1,C1,A2,C2)/det(A1,B1,A2,B2));

    return 0;
}

