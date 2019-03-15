#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long size;
    scanf("%lld",&size);
    vector <long long> v;
    for(int i = 0; i<size;i++){
        long long temp;
        scanf("%lld",&temp);
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    long long min = LLONG_MAX;
    for(auto i = v.begin(); i<v.end()-1;++i)
        if(abs((*i) - (*(i+1))) < min)
            min = abs((*i) - (*(i+1)));
    cout << min;
    return 0;
}

