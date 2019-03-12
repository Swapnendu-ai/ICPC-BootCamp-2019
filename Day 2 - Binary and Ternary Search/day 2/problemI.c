// CMU Qatar: Sparta
#include <stdio.h>
#include <string.h>

long long fn(long long *position, long long *velocity, long long guess, long long len) {
    long long n = 0;
    for (long long i = 0; i < len; i++) {
        n += (position[i] - guess) / velocity[i];
    }
    return n;
}

long long binSearch(long long *position, long long l, long long r, long long len) {
    long long mid;
    while (r - l > 1) {
        mid = l + (r - l) / 2;
        long long target = fn(position, velocity, mid, len);
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
