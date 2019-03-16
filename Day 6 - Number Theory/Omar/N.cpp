#include <bits/stdc++.h>

using namespace std;

struct pt
{
   type1 X,Y;
};

void createVector(pt *A,pt *B, pt *P)
{
    P->X = B->X - A->X;
    P->Y = B->Y - A->Y;
}

int main() {
    long long l, b;
    long long xa, ya;
    long long xb, yb;
    long long xc, yc;

    cin >> l >> b;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;

    pt A, B, P, Q, R, S, C;
    pt AB, AP, PQ, RQ, RS;

    createVector(&A, &B, &AB);
    


    return 0;
}
