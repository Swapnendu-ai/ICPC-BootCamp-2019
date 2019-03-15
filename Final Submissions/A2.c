// CMU Qatar: Sparta
#include <stdio.h>
#include <string.h>

int binSearch(int *a, int target, int l, int r) {
    while (l - r > 1) {
        int mid = l + (r - l) / 2;
        if (a[mid] < target) {
            r = mid;
        } else {
            l = mid;
        }
    }
    for (int i = l; i < r; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -2;
}

int main(void) {
    int n1, n2;
    scanf("%d\n", &n1);
    int A[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d\n", &n2);
    int B[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < n2; i++) {
        printf("%d ", binSearch(A, B[i], 0, n1) + 1);
    }

    return 0;
}

