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
 int main(){

 	long long n;
 	cin >> n;
 	vector <long long> a = all_primesFactors(n);
 	long long size = a.size();
 	for (int i = 0 ; i < size; i ++)
 		cout << a[i]<<" ";
 	return 0;


 }
