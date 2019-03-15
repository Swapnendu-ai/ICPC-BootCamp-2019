// CMU Qatar: Sparta
#include <stdio.h>
#include <string.h>
#include <math.h>

double f(double m, double c) {
    return 4 * m + 8 * log(m + 1) + m * log(m + 1) - c;
}

double binSearch(double c, double l, double r) {
    double guess;
    for (int i = 0; i < 100; i++) {
        guess = (l + r) / 2.0;
        if (f(guess, c) > 0) {
            r = guess;
        } else {
            l = guess;
        }
    }
    return guess;
}

int main(void) {
    double l = 0.0;
    double r = 10000.0, c;
    scanf("%lf", &c);

    printf("%lf", binSearch(c, l, r));

    return 0;
}

