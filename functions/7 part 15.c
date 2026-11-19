#include <stdio.h>

double sumNInputs(int count) {
    if (count <= 0) return 0.0;
    double val;
    scanf("%lf", &val);
    return val + sumNInputs(count - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n must be positive.\n");
        return 0;
    }
    printf("Enter %d numbers:\n", n);
    double sum = sumNInputs(n);
    printf("Sum = %.2lf\nMean = %.2lf\n", sum, sum / n);
    return 0;
}