#include <bits/stdc++.h>

using namespace std;

vector<int> sieveOfErathosthenes (int n){

	vector <pair <int, bool> > lst;
	vector<int> v;
	for (int i = 0; i <= n  ; i++)
		lst.push_back(make_pair(i, true)) ;
	for (int i = 2; i <= n; i ++){
		for (int j = i * i; j <= n + 1 ; j ++){
			if ((!(lst[j-1].first % i) && lst[j-1].first !=i)) {
				lst[j-1].second = false;
			}
		}
	}
	for (int i = 2; i <= n; i ++){
		if (lst[i].second) v.push_back(lst[i].first);
	}
	
	for (int i = 0 ; i < v.size(); i++)
		cout << v[i] << " ";
	cout <<endl	;
	return v;
}

long long factorial(int n){
	if ( n == 0 || n == 1) return 1; 
	return n * factorial (n-1);
}

int gcd(int a, int b){
	if (a == 0) return b ; 
	if (b == 0) return a ;
	if (a == b) return a;
	if (a < b) return gcd (a - b, b);
	return gcd (a, b - a);
}

int lcm(int a, int b){
	return a * b / gcd (a, b);
}

vector<int> primeFactors(int n){
	vector <int> primes;

	if (! (n%2)) primes.push_back(2);
	while (! (n%2)) n/=2;
	for (int i = 3 ; i <= sqrt (n); i++){
		if (!(n%i)) {
			primes.push_back(i);
		}
		while (! (n%i)) n = n/i ;
	}
	if (n > 2) primes.push_back(n);

	return primes;
}

vector <int> all_primesFactors(int n){
	vector <int> primes;

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

long long binomialCoef (int n, int k){

	long long dp[n + 1][k + 1];

	if (n == 0 || k == 0) return 1;
	for (int i = 0 ; i < n + 1; i ++){
		for ( int j = 0 ; j < k + 1; j ++)
			dp[i][j] = 0 ; 
	}
	for (int i = 0; i < n + 1 ; i ++){
		for ( int j = 0 ; j < min (i + 1, k + 1); j ++){
			if (j ==0 || j == i) dp[i][j] = 1;
			else {
				dp[i][j] = dp[i-1][j-1] + dp[i -1][j];
			}
		}
	}

	return dp[n][k];

}

long long binomialCoef_savespace (int n, int k){
	long long dp[k + 1];
	for (int i = 0 ; i < k + 1; i ++) dp[i] = 0 ;
	dp[0] = 1;
	for (int i = 0; i < n + 1; i ++){
		for (int j = min (i, k); j > 0 ; j --)
			dp[j] = dp[j] + dp[j-1];
	}
	return dp[k];
}
long long binomialCoef_savetime(int n, int k){
	long long res = 1;
	for (int i = 0; i < k; i ++ ){
		res *= (n - i);
		res /= (i + 1);
	}

	return res;

}
long long catalanNr (int n){
	if (n <=1) return 1;
	long long sum=0;
	for (int i = 0; i < n ; i++)
		sum += catalanNr(i)*catalanNr(n-i-1);

	return sum;
}

long long catalanNr_dp(int n){
	long long dp[n+1];

	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2 ; i <= n; i++){
		for (int j = 0; j < i ; j++){
			dp[i] += dp[j] * dp [i - j - 1];
		}
	}

	return dp[n];
}

long long catalanNr_On(int n){
	return binomialCoef_savetime(2*n,n) / (n+1);
}

long long mod_logn(vector <pair<long long, long long> > exp,long long MOD )
{
	long long res[exp.size()];
	for (int i = 0 ; i < exp.size(); i ++) res[i]=1; 
	for (int i = 0 ; i < exp.size(); i ++){
		int degrr = exp[i].second ; 
		int Nr  = exp[i].first; 
		for (int j = 0 ; j < degrr; j++){
			res[i] = (res[i] * Nr) % MOD;
		}
	}
	int ans=0; 
	for (int i = 0 ; i < exp.size(); i++)
		ans += res[i];
	ans %= MOD;
	return ans; 
}

int gcdExt ( int a, int b, int *x, int*y){
	if (a==0){
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int gcd = gcdExt(b%a, a, &x1, &y1);

	*x = y1 - (b/a)*x1;
	*y = x1;

	return gcd;
}
long long mod_inverse (int a, int m){
	int x, y; 
	int g = gcdExt(a, m, &x, &y);
	if (g != 1)
		return 0;
	return (x %m + m) % m;
}
long long modInverse (long long a, long long m){
	a = a % m ;
	for (int i = 1; i < m; i++){
		if ((a*i) % m == 1	) return i ;
	}
}
long long chinese_remainder(vector <pair< int, int> > inputs){

	long long prod=1; 
	for (int i = 0 ; i < inputs.size() ; i ++)
		prod *= inputs[i].first;
	long long sum = 0 ;
	for (int i = 0 ; i < inputs.size() ; i ++){
		sum += (inputs[i].second * (prod / inputs[i].first) * modInverse((prod / inputs[i].first), inputs[i].first)) % prod;
	}

	return sum % prod;


}
int main()
{
	// sieveOfErathosthenes(n);
	// cout << factorial(n)<<endl;
	// vector <int> primes = primeFactors(n);
	// for (int i = 0 ; i < primes.size(); i++)
	// 	cout << primes[i] << " ";
	// cout << binomialCoef(n, k);
	// cout << catalanNr_On1(n);
	// long long ans = mod_logn(exp, MOD);
	// long long ans = chinese_remainder(exp);
	// cout << "Result of modulus is : " <<ans << endl ;
	
	long long X, Y, Z, N;
	cin >> X >> Y>> Z >> N;

	vector < pair <long long, long long> > primes, primes1;
	primes.push_back(make_pair(X, N));
	primes.push_back(make_pair(Y, N));
	primes1.push_back(make_pair(Z,N));
	long long res1=mod_logn(primes, 1000000007);

	long long res2 = mod_logn(primes1, 1000000007);

	cout << res1 << " " << res2 <<endl;
	return 0;
} 