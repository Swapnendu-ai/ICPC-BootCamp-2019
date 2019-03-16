#include <bits/stdc++.h>

using namespace std;

#define fameMod (7 + 1E9)

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

int main()
{

	long long X, Y, Z, N;
	cin >> X >> Y>> Z >> N;

	long long deg1 = power(X, N, 1000000007LL);
	long long deg2 = power(Y, N, 1000000007LL);
	long long deg3 = power(Z, N, 1000000007LL);

	cout << (deg1 + deg2) % 1000000007LL << " " <<  deg3 % 1000000007LL;
	return 0;
}
