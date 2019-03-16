#include <bits/stdc++.h>

using namespace std;

vector <long long> all_primesFactors(long long n){
	vector <long long> primes;

	while (! (n%2)) {
		primes.push_back(2);
		n/=2;}

	for (int i = 3 ; i <= sqrt (n); i++){
		while (!(n%i)) {
			primes.push_back(i);
			n = n/i;
		}
	}
	if (n > 2) primes.push_back(n);

	return primes;
}

long long phi(long long n) {
    vector<int> factors = all_primesFactors(n);
    
}

int main()
{
	long long X, Y, Z, N;
	cin >> X >> Y>> Z >> N;

	vector < pair <long long, long long> > primes, primes1;
	primes.push_back(make_pair(X, N));
	primes.push_back(make_pair(Y, N));
	primes1.push_back(make_pair(Z,N));
	long long res1=mod_logn(primes, 1000000007);

	long long res2 = mod_logn(primes1, 1000000007);

	cout << res1 << " " << res2 << endl;
	return 0;
}
