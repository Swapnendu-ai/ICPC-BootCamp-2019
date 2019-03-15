// CMU Qatar: Sparta
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


double f(double x, long long* A, long long n) {
    double sum=0;
    for (int i = 0; i< n ; i++){
        double xi = (double)A[i];
        long long ti = A[i+1];
        double d = fabs(x - xi);
        //printf("%lld\n", ti);
        if (ti == 1) {
            sum += d;
            printf("%lf\n",sum );
        }
        if (ti == 2) {
            sum+= d * log(d + 1);
        }
        if (ti == 3) {
            sum+= d * sqrt(d);
        }
        sum+= d * d;
    }
    return sum;
}

void ternarySearch(long long *a, long long len) {
    double l = -1000000;
    double r = 1000000;
    for (int i = 0; i < 10; i++) {
        double m1 = l + (r - l)/3;
        double m2 = r - (r - l)/3;
        if (f(m1, a, len) < f(m2, a, len)) {
            r = m2;
        } else {
            l = m1;
        }
    }
    l = (l + r) / 2;
    printf("%lf\n%lf", f(4.0, a, len), 4.0);
}

int main(void) {
    long long n;
    scanf("%lld", &n);
    long long A[2*n];
    long long a ;
    long long b;
    for (long long i = 0; i < n; i++) {
        scanf("%lld %lld", &A[i], &A[i + 1]);
    }
    ternarySearch(A, n);
    for (long long i = 0; i < n; i++) {
        printf("%lld %lld", A[i], A[i + 1]);
    }
    return 0;
}

