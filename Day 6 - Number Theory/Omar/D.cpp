#include <bits/stdc++.h>

using namespace std;

long long power(long long base,long long exp,long long modulo)
{
    if(!modulo || base < 0 || exp < 0)
        return -1;
    if(!exp)
        return 1;
    if(exp<=1)
        return base%modulo;
    if(!(exp%2))
        return power((base*base)%modulo,exp/2,modulo)%modulo;
    return (base * power((base*base)%modulo,(exp-1)/2,modulo))%modulo;
}

long long remMod(long long a,long long b,long long modulo)
{
    if(!modulo)
        return -1;
    a %= modulo;
    b %= modulo;
    return (long long)(a*power(b,modulo-1, modulo)) % (long long)modulo;
}

long long GCD (long long x, long long y)
{
    // return __gcd(x,y);
    if(x<y) swap(x,y);
    if(y<1)
        return x;
    return GCD(y,x%y);
}

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    long long g = GCD(b, m);
    if (g == 1) {
        long long res = remMod(a, b, m);
        cout << res;
    } else if (a % g == 0) {
        cout << "AMBIGUOUS";
    } else {
        cout << "NO SOLUTION";
    }

    return 0;
}
