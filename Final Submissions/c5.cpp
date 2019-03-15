#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long x11,x12,y11,y12;
    long long x21,x22,y21,y22;
    int flag = 1;
    vector <long long> left,right;
    scanf("%lld %lld %lld %lld",&x11,&y11,&x12,&y12);
    scanf("%lld %lld %lld %lld",&x21,&y21,&x22,&y22);
    if(x11>x12) swap(x11,x12);
    if(x21>x22) swap(x21,x21);
    if(y11>y12) swap(y11,y12);
    if(y21>y22) swap(y21,y21);

    if(x11<x21 && x12<x21) flag = 0;
    if(x11>x22 && x12>x22) flag = 0;
    if(y11<y21 && y12<x21) flag = 0;
    if(y11>y22 && y12>y22) flag = 0;


    if(flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

