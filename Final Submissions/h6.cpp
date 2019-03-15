#include <bits/stdc++.h>

using namespace std;

vector<long long> res;

// Given an integer n, return a vector of ints where each int is a prime
void sieve(long long n) {
    bool isNonPrime[n];
    for (int i = 0; i < n; i++) {
        if (i > 1) {
            isNonPrime[i] = false;
        } else {
            isNonPrime[i] = true;
        }
    }

    for (int i = 2; i < n; i++) {
        if (!isNonPrime[i]) {
            for (int j = i + i; j <= n; j+=i) {
                isNonPrime[j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (!isNonPrime[i]) {
            res.push_back(i);
        }
    }
}

int main() {
	int n;
	cin >> n;

	sieve(1350000);

	for (int i = 0; i < n; i++) {
		long long inp;
		cin >> inp;
		cout << res[inp - 1] << " ";

	}
	// long long maxE = *(max_element(k , k + n));
	// cout << maxE << endl;

	// cout << res.size() << endl;
	// for (int i = 0; i < n; i++) {
	// 	cout << res[k[i] - 1] << " ";
	// }

	return 0;

}

