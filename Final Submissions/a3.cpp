// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

void insertionsort(long long *a, long long len)
{
     for(int i = 0; i< len; i++)
    {
        long long key = a[i];
        int j;
        for(j = i -1 ; j>=0 && a[j] > key; --j)
        {
            a[j+1] = a[j];
        }
        a[j+1] = key;
    }
}

int main() {
    long long size;
    cin >> size;
    long long a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    insertionsort(a, size);
    cout << a[0] << " " << a[1];
    return 0;
}

