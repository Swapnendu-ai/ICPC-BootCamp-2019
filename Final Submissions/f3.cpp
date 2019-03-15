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
    int s, size;
    cin >> s >> size;
    long long a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    insertionsort(a, size);
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
        if (sum <= s) {
            count++;
        }
    }
    cout << count;
    return 0;
}

