#include <bits/stdc++.h>

using namespace std;

void bubblesort(long long *a, long long len)
{
    for(int i = 0; i< len-1; i++)
        for(int j = 0; j< len-1 - i; j++)
        {
            if(a[j] > a[j+1])
            {
                long long temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }

}

void selectionsort(long long *a, long long len, long long *counter)
{
    for(int i = 0; i< len-1; i++)
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
        if(position != i)
            *counter = *counter + 1;
        a[position] = a[i];
        a[i] = min;

    }
}

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

bool cmp(pair<int,int> a, pair<int,int> b)
{
    /*true iff a < b*/
    if(a.first != b.first)
        return a.first >= b.first;
    return a.second < b.second;
}

int main()
{
    // vector<pair<int,int>> a;
    // a.push_back({2,0});
    // a.push_back({1,3});
    // sort(a.begin(),a.end()/*,cmp*/);
    // cout <<a[0].first << " "<< a[0].second;
    //reverse(a.begin(),a.end())
    // long long a[100000];
    // for(int i =0; i< 100000; i++)
    //     a[i] = 100000 - i;
    // insertionsort(a,100000LL);

    // for(int i =0; i< 100000; i++)
    //     cout << a[i] << " \n";
    int size;
    long long count = 0;
    cin >> size;
    long long a[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    selectionsort(a, size,&count);
    cout << count ;
    cout << "\n";
}
