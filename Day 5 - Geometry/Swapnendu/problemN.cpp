#include <bits/stdc++.h>

using namespace std;

struct line
{
    type1 a,b,c;
};

struct pt
{
   long double X,Y;
};

void createVector(pt *A,pt *B, pt *P)
{
    P->X = B->X - A->X;
    P->Y = B->Y - A->Y;
}

void createLine(pt *A,pt *B, line *L)
{
    L->a = A->Y - B->Y;
    L->b = A->X - B->X;
    L->c = -L->a * A->X - L->b * A->Y;
}

int main()
{
    pt A,B,C,D;
    line l1,l2;

    scanf("%lld %lld",A.X,A.Y);
    scanf("%lld %lld",B.X,B.Y);
    scanf("%lld %lld",C.X,C.Y);
    scanf("%lld %lld",D.X,D.Y);

    createLine(&A,&B,&l1);
    createLine(&C,&D,&l2);

    long double det = l1.a*l2.b - l2.a*l1.b;

    if(!det)
    {
        if(A.x == )
    }

    if(flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
