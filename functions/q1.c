#include <stdio.h>

double power(double a, int b) {
    double result = 1.0;

    if (b >= 0) {
        for (int i = 0; i < b; i++) {
            result *= a;
        }
    } else {
        for (int i = 0; i < -b; i++) {
            result *= a;
        }
        result = 1.0 / result;
    }

    return result;
}

void printResult(double a, int b, double ans) {
    printf("%.2lf raised to %d = %.4lf\n", a, b, ans);
}

int main() {
    double a;
    int b;

    printf("Enter base (a) and exponent (b): ");
    scanf("%lf %d", &a, &b);

    double ans = power(a, b);
    printResult(a, b, ans);

    return 0;
}