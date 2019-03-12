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

long long fn(long long *a, long long k, long long len) {
    long long n = 0;
    for (long long i = 0; i < len; i++) {
        n += a[i] / k;
    }
    return n;
}

long long binSearch(long long *a, long long l, long long r, long long len, long long k) {
    long long mid;
    while (r - l > 1) {
        mid = l + (r - l) / 2;
        long long target = fn(a, mid, len);
        if (target < k) {
            r = mid;
        } else {
            l = mid;
        }
    }
    if (fn(a, r, len) >= k) {
        mid = r;
    } else if (fn(a, l, len) >= k) {
        mid = l;
    } else {
        mid = 0;
    }
    printf("%lld\n", mid);
    return 0;
}

int main(void) {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long A[n];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &A[i]);
    }
    insertionSort(A, n);
    binSearch(A, 1, A[n - 1], n, k);

    return 0;
}
