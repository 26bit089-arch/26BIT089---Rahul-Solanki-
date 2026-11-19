#include <stdio.h>

double sum10Inputs(int count) {
    if (count == 0) return 0.0;
    double val;
    scanf("%lf", &val);
    return val + sum10Inputs(count - 1);
}

int main() {
    printf("Enter 10 numbers:\n");
    double sum = sum10Inputs(10);
    printf("Sum = %.2lf\nMean = %.2lf\n", sum, sum / 10.0);
    return 0;
}