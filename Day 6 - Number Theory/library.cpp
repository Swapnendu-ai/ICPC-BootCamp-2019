#include <bits/stdc++.h>
using namespace std;

#define dMult(n,c) (n/gcd(c,n)) // number of distinct multiples of c modulo n
//only iff gcd(c,n) = 1, there are n different numbers modulo n

long long GCD (long long x, long long y)
{
    return __gcd(x,y);
    // if(x<y) swap(x,y);
    // if(y<1)
    //     return x;
    // return GCD(y,x%y);
}

int main()
{
    long long x,y;
    x = 123;
    y = 27;
    cout << GCD(x,y) << endl;
    while(1);
    return 0;
}
