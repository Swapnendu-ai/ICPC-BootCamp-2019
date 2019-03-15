#include <bits/stdc++.h>

using namespace std;


int main() {

    long long n;
    cin >> n;

    long long dp[n + 2];
    dp[1] = 2;
    dp[2] = 3;
    for (long long i = 3; i < n + 1; i++) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
    }

    // for (int i = 1; i < n + 1; i++) {
    //     // cout << dp[i] << " ";
    // }
    // cout << endl;

    cout << dp[n];

    return 0;
}

