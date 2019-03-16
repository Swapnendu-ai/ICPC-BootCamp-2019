#include <bits/stdc++.h>

using namespace std;

long long GCD (long long x, long long y)
{
    // return __gcd(x,y);
    if(x<y) swap(x,y);
    if(y<1)
        return x;
    return GCD(y,x%y);
}

int main() {
    long long n1, n2;
    cin >> n1;
    cin >> n2;

    cout << GCD(n1, n2);

    return 0;
}
