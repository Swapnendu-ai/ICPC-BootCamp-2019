#include <bits/stdc++.h>

using namespace std;

struct pt
{
   long double X,Y;
};

struct line
{
    long double a,b,c;
};

#define root(x) (sqrtl(max(x,0.0L)))
#define trail0(x) (setprecision(x))
#define len2(p) (p.X * p.X + p.Y * p.Y) //uses a structure of x and y values, square of the length
#define len(p) (root(len2(p)))

long double det(long double a, long double b, long double c, long double d) {
    return (a * d) - (b * c);
}

long double dist(pt x, pt y) {
    return ((x.X - y.X)*(x.X - y.X)) + ((x.Y - y.Y)*(x.Y - y.Y));
}

int main() {

    line x, y, z;
    cin >> x.a >> x.b >> x.c;
    cin >> y.a >> y.b >> y.c;
    cin >> z.a >> z.b >> z.c;


    pt a, b, c;
    a.X = -det(x.c, x.b, y.c, y.b)/det(x.a, x.b, y.a, y.b);
    a.Y = -det(x.a, x.c, y.a, y.c)/det(x.a, x.b, y.a, y.b);

    b.X = -det(z.c, z.b, y.c, y.b)/det(z.a, z.b, y.a, y.b);
    b.Y = -det(z.a, z.c, y.a, y.c)/det(z.a, z.b, y.a, y.b);

    c.X = -det(z.c, z.b, x.c, x.b)/det(z.a, z.b, x.a, x.b);
    c.Y = -det(z.a, z.c, x.a, x.c)/det(z.a, z.b, x.a, x.b);

    printf("%.9Lf", sqrt(dist(a,b)) + sqrt(dist(b, c)) + sqrt(dist(c, a)));

    return 0;
}
