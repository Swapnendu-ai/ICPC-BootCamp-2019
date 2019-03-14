
#include <bits/stdc++.h>

using namespace std;

#define dot(p,q) (p.x*q.x + p.y*q.y)

#define det(p,q) (p.x * q.y - p.y * q.x)

struct pt
{
   int x,y;
};

void createVector(pt *A,pt *B, pt *P)
{
    P->x = B->x - A->x;
    P->y = B->y - A->y;
}

int main() {
    pt a,b,p;
    cin >> p.x >> p.y >> a.x >> a.y >> b.x >> b.y;
    pt ap,ab,bp;
    createVector(&a,&b,&ab);
    createVector(&a,&p,&ap);
    createVector(&b,&p,&bp);
    if(det(ab,ap) != 0 || det(ab,bp) != 0){
        cout<<"NO";
        exit(0);
    }
    if(dot(ap,bp) <= 0 )
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
