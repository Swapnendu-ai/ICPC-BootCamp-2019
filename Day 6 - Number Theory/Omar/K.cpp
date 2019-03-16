#include <bits/stdc++.h>

using namespace std;

long long dp[1000007];

long long binomialCoef_savetime(long long n, long long k){
	long long res = 1;
	for (int i = 0; i < k; i ++ ){
		res *= (n - i);
		res /= (i + 1);
	}

	return res;

}


long long binomialCoef_savetimeh(long long n, long long m, long long l, long long p){
	long long sum = 0 ;
	for (int k = 1 ; k <= l; k++ ){
		if (n >= m*k) {
			int res = binomialCoef_savetime(n, min(m*k, n-m*k));
			sum += res ;
		}
		if (sum > p) sum = sum % p;
	}
	return sum;
}

 int main(){

 	long long n, m ,l ,p = 1000000007;
 	cin >> n >> m >> l;

    dp[0] = 1;
    for (int i = 1; i < 1000007; i++) {
        dp[i] = (dp[i - 1] * i) % 1000000007;
    }
    //
    // for (int i = 0; i < n; i++) {
    //     // cout << dp[i] << " ";
    // }

    // if (n < m * )

    long long sum = 0;
    for (int i = 1; i <= l; i++) {
        sum = (sum + (dp[n] / (dp[m * i] * (dp[n - m * i])))) % 1000000007;
    }
    cout << sum;

 	// cout << binomialCoef_savetimeh(n, m, l , p);
 	return 0;


 }
