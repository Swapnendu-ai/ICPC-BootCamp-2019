#include <bits/stdc++.h>

using namespace std;

vector<pair <int, int> > primeFactors(long long n){
	vector <pair<int, int> > primes;

	bool flag = false ; 
	int cnt = 0 ; 
	if( ! (n%2)) flag = true;
	while (! (n%2)) {
		cnt ++ ;
		n/=2;
	}
	if (flag ) primes.push_back(make_pair(2, cnt));
	flag = false;

	for (int i = 3 ; i <= sqrt (n); i++){
		cnt = 0 ;
		if (! (n%i)) flag = true;
		
		while (! (n%i)) {
			cnt ++; 
			n = n/i ;
		}

		if (flag) primes.push_back(make_pair(i, cnt));
		flag = false; 
		
	}
	if (n > 2) primes.push_back(make_pair(n, 1));

	return primes;
}


 int main(){

 	long long n[1002];
 	long long nrs ;
 	int cnt=0;
 	vector<pair <int, int> > results;
 	for(int i = 0 ; i < 1002; i++) n[i] = 0;
 	while(cin>>nrs){
 		n[cnt] = nrs;
 		cnt ++;
 	}

 	for (int i = 0 ; i < 1002; i ++)
 	{
 		if (n[i]){
		long long prod = 1;
 		results = primeFactors(n[i]);
 		for (int j = 0 ; j < results.size(); j++){
 			// cout << results[i].first << " : " << results[i].second <<endl;
 			prod *= (results[j].first - 1) * pow(results[j].first, results[j].second - 1);
 		}
 		cout << prod << endl;
 		}
 		results.clear();
 	}
 	// vout << results1[i].first << " " << results1[i].second << endl;
	
 	return 0;


 }
