#include <bits/stdc++.h>

using namespace std;

// Given an integer n, return a vector of ints where each int is a prime
vector<int> sieve(int n) {
    vector<int> res;
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
    return res;
}

// Given an integer n, return true if n is prime. Otherwise, false.
bool isPrime(int n) {
    for (int i = 2; i*i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// How to use the library
int main() {
    int n;
    cin >> n;
    bool res = isPrime(n);
    if (res) {
        cout << n << " is prime!";
    } else {
        cout << n << " is not prime!";
    }
    cout << endl;

    cin >> n;
    bool isNonPrime[n];
    vector<int> primes = sieve(n);
    for (int x: primes) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
