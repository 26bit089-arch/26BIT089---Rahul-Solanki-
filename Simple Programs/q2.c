#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Difference = %.2lf\n", a - b);
    return 0;
}