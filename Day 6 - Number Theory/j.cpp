#include <bits/stdc++.h>
using namespace std;



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

int main()
{


    return 0;
}
