#include <stdio.h>

int main() {
    double p, r, n, interest;
    printf("Enter Principal (P), Rate (R), and Time (N): ");
    scanf("%lf %lf %lf", &p, &r, &n);

    interest = (p * r * n) / 100.0;
    printf("Interest = %.2lf\n", interest);
    return 0;
}