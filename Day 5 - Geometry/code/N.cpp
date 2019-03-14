#include <bits/stdc++.h>

using namespace std;

struct pt
{
   long double X,Y;
};

void createVector(pt *A,pt *B, pt *P)
{
    P->X = B->X - A->X;
    P->Y = B->Y - A->Y;
}

bool lessthan(long double a, long double b) {
    return a + EPS < b;
}

long long cross_product(pair<int, int> a, pair<int, int> b) {
    return (a.first*b.second - a.second*b.first)/2.0;
}

void createLine(pt *A,pt *B, line *L)
{
    L->a = A->Y - B->Y;
    L->b = A->X - B->X;
    L->c = -L->a * A->X - L->b * A->Y;
}

int main() {

    long double x1, y1, x2, y2, x3, y3, x4, y4;
    pt a, b, c, d;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    a.X = x1;
    a.Y = y1;

    b.X = x2;
    b.Y = y2;

    c.X = x3;
    c.Y = y3;

    d.X = x4;
    d.Y = y4;

    if (lessthan(max(a.X, b.X), min(c.X, d.X))) {
        cout << -1;
        exit(0);
    }

    if (lessthan(max(c.X, d.X), min(b.X, d.X))) {
        cout << -1;
        exit(0);
    }

    if (lessthan(max(a.Y, b.Y), min(c.Y, d.Y))) {
        cout << -1;
        exit(0);
    }

    if (lessthan(max(c.Y, d.Y), min(b.Y, d.Y))) {
        cout << -1;
        exit(0);
    }

    int sign1 = sign(cross_product(make_pair(b.X - a.X, b.Y - a.Y), make_pair(c.X - a.X, c.Y - a.Y)));
    int sign2 = sign(cross_product(make_pair(b.X - a.X, b.Y - a.Y), make_pair(d.X - a.X, d.Y - a.Y)));
    int sign3 = sign(cross_product(make_pair(d.X - c.X, d.Y - c.Y), make_pair(a.X - c.X, a.Y - c.Y)));
    int sign4 = sign(cross_product(make_pair(d.X - c.X, d.Y - c.Y), make_pair(b.X - c.X, b.Y - c.Y)));

    if (sign1 * sign2 <= 0) {
        cout << -1;
        exit(0);
    }

    if (sign3 * sign4 <= 0) {
        cout << -1;
        exit(0);
    }

    return 0;
}
