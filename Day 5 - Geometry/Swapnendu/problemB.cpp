#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long size;
    scanf("%lld",&size);
    vector <long long> left,right;
    for(int i = 0; i<size;i++){
        long long temp1,temp2;
        scanf("%lld %lld",&temp1,&temp2);
        if(temp1<temp2)
        {
            left.push_back(temp1);
            right.push_back((temp2));
        }
        else
        {
            right.push_back(temp1);
            left.push_back((temp2));
        }

    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    // cout << (*(left.end()-1)) - (*right.begin()) <<endl;
    cout << max(0LL,(*right.begin()) - (*(left.end()-1)));
    return 0;
}
