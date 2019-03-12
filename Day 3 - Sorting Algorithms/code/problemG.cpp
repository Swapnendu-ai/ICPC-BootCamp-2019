// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    /*true iff a < b*/
    if ((a % 10) != (b % 10)) {
        return (a % 10) < (b % 10);
    }
    return a < b;
}

int insertionsort(long long *a, int len)
{
    int count = 0;
     for(int i = 0; i< len; i++)
    {
        long long key = a[i];
        int j;
        for(j = i -1 ; j>=0 && a[j] > key; --j)
        {
            a[j+1] = a[j];
            count++;
        }
        a[j+1] = key;
    }
    return count;
}

int main() {
    int size;
    cin >> size;
    vector<long long> a;
    long long b;
    for (int i = 0; i < size; i++) {
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
