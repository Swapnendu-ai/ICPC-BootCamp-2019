#include <bits/stdc++.h>

using namespace std;

#define root(x) (sqrtl(max(x,0.0L)))
#define trail0(x) (setprecision(x))
#define len2(p) (p.X * p.X + p.Y * p.Y) //uses a structure of x and y values, square of the length
#define len(p) (root(len2(p)))
#define dot(p,q) (p.X*q.X + p.Y*q.Y)
#define det(p,q) (p.X * q.Y - p.Y * q.X)



struct pt
{
   long double X,Y;
};

void createVector(pt *A,pt *B, pt *P)
{
    P->X = B->X - A->X;
    P->Y = B->Y - A->Y;
}




int main()
{
    pt A,B,P;
    pt AB,BP,AP,BA;

    scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&P.X,&P.Y,&A.X,&A.Y,&B.X,&B.Y);
    createVector(&A,&B,&AB);
    createVector(&B,&A,&BA);
    createVector(&A,&P,&AP);
    createVector(&B,&P,&BP);
    if(A.X==B.X && A.Y == B.Y)
    {
        printf("%.9Lf",len(AP));
        exit(0);
    }

    if(dot(BA,BP) < 0 || dot(AB,AP)<0)
    {
        printf("%.9Lf",min(len(BP),len(AP)));
        exit(0);
    }
    printf("%.9Lf",2*det(AB,AP)/len(AB));

    return 0;
}

