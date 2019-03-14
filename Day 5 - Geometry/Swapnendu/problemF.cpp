#include <bits/stdc++.h>

using namespace std;

#define root(x) (sqrtl(max(x,0.0L)))
#define trail0(x) (setprecision(x))
#define len2(p) (p.X * p.X + p.Y * p.Y) //uses a structure of x and y values, square of the length
#define len(p) (root(len2(p)))

struct pt
{
   long double X,Y;
};


int main() {
    long double x1, y1, x2, y2;
    long double k;
    pt L;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> k;

    L.X = x2-x1;
    L.Y = y2-y1;
    long double length = len(L);
    // L.X /= length;
    // L.Y /= length;
    printf("%.9Lf %.9Lf",x1+L.X*k/(k+1),y1+L.Y*k/(k+1));

    return 0;
}
