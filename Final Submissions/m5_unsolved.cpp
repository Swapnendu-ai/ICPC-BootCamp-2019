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
#define EPS (1E-9)

#define equal(a,b) (fabsl(a-b) < EPS)

#define zero(x) (equal(0.0L,x))
int main() {

    long double x1, y1, x2, y2, x, y;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x >> y;

    // if (x1 == x2) {
    //     printf("%.9Lf %.9Lf", -x, y);
    //     exit(0);
    // } else if (y1 == y2) {
    //     printf("%.9Lf %.9Lf", x, -y);
    //     exit(0);
    // } else if (x1 > x2) {
    //     swap(x1, x2);
    //     swap(y1, y2);
    // }

    long double A = y1 - y2 ;
    long double B = x2 - x1 ;
    long double C = - A * x1 - B * y1;
    long double k = abs((A*x + B*y + C))/(A*A + B*B);
    // cout << k << endl;
    if (zero(k)) {
        cout << -1;
        exit(0);
    }
    // long double dist = A*x +
        printf("%.8Lf %.8Lf",  x - 2 * A * k , y - 2 * B * k);


    // pt S, T;
    //
    // long double X = x2 - x1;
    // long double Y = y2 - y1;
    //
    // S.Y = -((-Y*X*x - y*Y*Y + x1*X*Y - y1*X*X)/(Y*Y+X*X));
    // S.X = (x*X-S.Y*Y+y*Y)/X;
    //
    // // cout << X << endl;
    // //
    // // cout  << "S: "<< S.X << " " << S.Y << endl;
    //
    // pt P;
    // P.X = x;
    // P.Y = y;
    //
    // createVector(&P, &S, &T);
    //
    // // cout << T.X << " " << T.Y << endl;
    //
    // printf("%.9Lf %.9Lf", x + 2 * T.X, y + 2 * T.Y);


    return 0;
}

