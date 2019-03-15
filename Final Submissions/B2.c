// CMU Qatar: Sparta
#include <stdio.h>
#include <string.h>

long long binSearch(long long *a, long long target, long long l, long long r) {
    if (target < a[0]) return -2;
    if (target > a[r - 1]) return -2;
    while (r - l > 1) {
        long long mid = l + (r - l) / 2;
        if (a[mid] <= target) {
            l = mid;
        } else {
            r = mid;
        }
    }
    for (long long i = r; i >= l; i--) {
        if (a[i] == target) {
            return i;
        }
    }
    return -2;
}

int main(void) {
    long long n1, n2;
    scanf("%lld\n", &n1);
    long long A[n1];
    for (long long i = 0; i < n1; i++) {
        scanf("%lld", &A[i]);
    }
    scanf("%lld\n", &n2);
    for (long long i = 0; i < n2; i++) {
        long long target;
        scanf("%lld", &target);
        printf("%lld ", binSearch(A, target, 0, n1) + 1);
    }

    return 0;
}

