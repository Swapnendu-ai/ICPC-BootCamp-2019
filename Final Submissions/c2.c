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

long long binSearch(long long *a, long long target, long long l, long long r) {
    while (r - l > 1) {
        long long mid = l + (r - l) / 2;
        if (a[mid] == target) {
            return mid;
        }
        if (a[mid] < target) {
            r = mid;
        } else {
            l = mid;
        }
    }
    for (long long i = l; i < r; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -1;
}

long long min(long long a, long long b) {
    if (a > b) return b;
    else return a;
}

long long bound(long long *a, long long target, long long l, long long r) {
    while (r - l > 1) {
        long long mid = l + (r - l) / 2;
        // printf("mid: %lld\n", target);
        if (a[mid] < target) {
            l = mid;
        } else {
            r = mid;
        }
        // printf("l, r: %lld, %lld\n", l, r);
    }
    // for (int i = 0; i < 6; i++) {
    //     printf("%lld ", a[i]);
    // }
    // printf("\n");
    // printf("dsgds: %lld %lld\n", l, r);
    return min(target - a[l], a[r] - target);
}

void fn(long long *a, long long target, long long l, long long r) {
    printf("%lld\n", bound(a, target, l, r));
}

int main(void) {
    int n1, n2;
    scanf("%d\n", &n1);
    long long A[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%lld", &A[i]);
    }
    insertionSort(A, n1);
    // for (int i = 0; i < n1; i++) {
    //     printf("%lld ", A[i]);
    // }
    scanf("%d\n", &n2);
    for (int i = 0; i < n2; i++) {
        long long target;
        scanf("%lld", &target);
        fn(A, target, 0, n1);
    }

    return 0;
}

