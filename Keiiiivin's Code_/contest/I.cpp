#include <bits/stdc++.h>

using namespace std;

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
			int res = binomialCoef_savetime(n, m*k);
			sum += res ; 
		}
		if (sum > p) sum = sum % p;
	}
	return sum;
}

 int main(){

 	long long n, m ,l ,p = 1000000007;
 	cin >> n >> m >> l;

 	cout << binomialCoef_savetimeh(n, m, l , p); 
 	return 0;


 }