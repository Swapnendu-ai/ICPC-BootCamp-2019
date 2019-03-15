// CMU Qatar: Sparta
#include <stdio.h>
#include <string.h>

void insertionSort(long long arr[], long long n)
{
   long long i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}


int main(void) {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long a[n];
    long long b[m];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for (long long i = 0; i < m; i++) {
        scanf("%lld", &b[i]);
    }
    long long c[n * m];
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            c[i * m + j] = a[i] + b[j];
        }
    }
    insertionSort(c, n * m);
    printf("%lld\n", c[k - 1]);

    return 0;
}

