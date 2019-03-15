// CMU Qatar: Sparta
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int fn(long long a) {
    int sum = 0;
    while (a > 1) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

bool cmp(int a, int b)
{
    /*true iff a < b*/
    if (fn(a) != fn(b)) {
        return fn(a) < fn(b);
    }
    return fn(a) < fn(b);
}

int main() {
    vector<long long> a;
    long long b;
    while (cin >> b) {
        a.push_back(b);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}

