#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Addition = %.2lf\n", a + b);
    printf("Subtraction = %.2lf\n", a - b);
    printf("Multiplication = %.2lf\n", a * b);

    if (b == 0) {
        printf("Division = Undefined (cannot divide by zero)\n");
    } else {
        printf("Division = %.2lf\n", a / b);
    }
    return 0;
}