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

pair <long long, long long> diophantine(long long a, long long b, long long c)
{
    long long g = GCD(a, b);
    // cout << " c g " << c << " " << g << endl;
    if(!(g % c))
    {
        a = a / c;
        b = b / c;
        c = 1;

        cout << a << " " << b << " " << c << endl;

        return make_pair(-b / c, a / c);
    }
    return make_pair(0, 0);
}

int main() {
    long long n;
    cin >> n;

    int a, b, c;

    long long a1[n];
    long long b1[n];
    long long c1[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        a1[i] = a;
        b1[i] = b;
        c1[i] = c;
    }

    for (int i = 0; i < n; i++) {
        pair<long, long> res = diophantine(a1[i], b1[i], c1[i]);
        cout << res.first << " " << res.second << endl;
    }

    return 0;
}
