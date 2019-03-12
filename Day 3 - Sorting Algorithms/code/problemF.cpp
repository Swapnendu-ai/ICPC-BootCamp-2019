// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s, size;
    cin >> s >> size;
    vector <long long> a;
    long long b;
    for (long long i = 0; i < size; i++) {
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    long counter = 0;
    long long sum = 0;
    while(sum<s && counter < size)
    {
        sum += a[counter];
        if(sum>s)
            break;
        counter++;
    }
    cout << counter;
    return 0;
}
