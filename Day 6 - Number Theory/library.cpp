#include <bits/stdc++.h>
using namespace std;


long long GCD (long long x, long long y)
{
    //gcd(x,y);
    if(x<y) swap(x,y);
    if(y<1)
        return x;
    return GCD(y,x%y);
}

int main()
{
    long long x,y;
    x = 123;
    y = 27;
    cout << GCD(x,y) << endl;
    return 0;
}
