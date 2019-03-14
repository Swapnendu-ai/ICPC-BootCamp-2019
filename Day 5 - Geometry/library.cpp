#include <bits/stdc++.h>
#include <math.h>
#include <vector>

using namespace std;

typedef long long lli;
typedef long double ld;

#define for(a,b) for(int i = a; i<b; i++)

#define type1 int
#define EPS (1E-9)
#define equal(a,b) (fabsl(a-b) < EPS)
#define less(a,b) (a + EPS < b)
#define less_equal(a,b) (a <= b + EPS)
#define isZero(x) (equal(0.0L,x))
#define arcsin(x) (asin(min(max(x,-1.0L),1.0L)))
#define arccos(x) (acos(min(max(x,-1.0L),1.0L)))
#define root(x) (sqrtl(max(x,0.0L)))
#define trail0(x) (setprecision(x))
#define len2(p) (p.X * p.X + p.Y * p.Y) //uses a structure of x and y values, square of the length
#define len(p) (root(len2(p)))
#define dot(p,q) (p.X*q.X + p.Y*q.Y)
#define angle(p,q) (dot(p,q)/(len(p) * len(q)))
#define ortho(p,q) (isZero(dot(p,q)))
#define accute(p,q) (less(0.0L,dot(p,q)))
#define obtuse(p,q) (less(dot(p,q),0.0L))
#define det(p,q) (p.X * q.Y - p.Y * q.X)
#define collinear(p,q) (isZero(det(p,q)))
#define triArea(p,q) (det(p,q)/2.0L)
//#define boundBox(a,b,p) min(ax,bx) <= px <= max(ax,bx) && min(ay,by) <= px <= max(ax,ba)
// #define norm(p) (p.X/len(p),p.Y/len(p))


struct pt
{
   type1 X,Y;
};

struct line
{
    type1 a,b,c;
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

//wrong : need to create vector
// bool does_point_belong_segment(pt *A, pt *B, pt *P)
// {
//     return dot(A,P) >= 0 && dot(A,P) >= 0
// }

bool visible(pt *centre, pt *observer, pt *P)
{
    pt CA, CP;
    createVector(P,centre,&CP);
    createVector(observer,centre,&CA);
    return obtuse(CA,CP);
}

type1 isInPoly(vector <pt *> poly, pt *P) //points of the polygon
{
    // bool isRight = find determinant and det > 0; //which side
    //for each pt in vector, the isRight should be the same


}

inline bool cmp1(type1 a, type1 b)
{
    return a<b;
}

inline bool cmp2(type1 a, type1 b)
{
    return b<a;
}

inline bool intersection_segments(vector <type1> left, vector <type1> right)
{
    sort(left.begin(),left.end(),cmp2);
    sort(right.begin(),right.end(),cmp1);
    return (*(left.begin())) <= (*(right.begin()));
}

void cramer(line* A, line *B, pt *P)
{
    P->X = -(A->c*B->c - A->b * B->b) / (A->a*B->a - A->b * B->b);
    P->Y = -(A->a*B->a - A->c * B->c) / (A->a*B->a - A->b * B->b);
}


//printf("%.10f")

int main()
{
    return 0;
}
