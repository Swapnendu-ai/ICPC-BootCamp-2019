// CMU Qatar: Sparta
#include <bits/stdc++.h>
using namespace std;

void selectionsort(long long *a, long long len)
{
    for(int i = 0; i< 2; i++)
    {
        long long min = a[i];
        long long position = i;
        for(int j = i + 1; j< len; j++)
        {
            if(a[j] < min)
            {
                position = j;
                min = a[j];
            }
        }
        a[position] = a[i];
        a[i] = min;

    }
}

int main() {
    int size;
    cin >> size;
    long long a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    selectionsort(a, size);
    cout << a[0] << " " << a[1];
    return 0;
}
