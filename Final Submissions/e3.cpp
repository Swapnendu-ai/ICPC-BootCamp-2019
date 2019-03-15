// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

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
    long long a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    int count = insertionsort(a, size);
    cout << count;
    return 0;
}

