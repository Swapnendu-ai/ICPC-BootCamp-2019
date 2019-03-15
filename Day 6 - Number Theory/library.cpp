#include <bits/stdc++.h>
using namespace std;

#define dMult(n,c) (n/gcd(c,n)) // number of distinct multiples of c modulo n
//only iff gcd(c,n) = 1, there are n different numbers modulo n

#define fameMod (7 + 1E9)
#define fameMod2 (9 + 1E3)
#define coPrime(a,b) (__gcd(a,b) == 1)
long long GCD (long long x, long long y)
{
    // return __gcd(x,y);
    if(x<y) swap(x,y);
    if(y<1)
        return x;
    return GCD(y,x%y);
}
vector <int> binary;
//reverse it before using
void int2bin(unsigned long long x)
{
    if(x<=1){
        binary.push_back(x);
        return;
    }
    binary.push_back(x%2);
    int2bin(x/2);
}

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
    return (long long)(a*pow(b,modulo-2)) % (long long)modulo;
}

pair <long long> diophantine(long long a, long long b, long long c)
{
    long long g = __gcd(a,b);
    if(!(g%c))
    {
        a /= g;
        b/= g;
        c/= g;
        return make_pair(-b/c,a/c)
    }
    return make_pair(0,0)
}

int main()
{
    long long x,y;
    x = 123;
    y = 27;
    // int2bin(123);
    // reverse(binary.begin(),binary.end());
    // for(int x : binary)
    //     cout<<x;
    // cout<<endl;
    cout << remMod(10000,40,13)<<endl;
    return 0;
}
