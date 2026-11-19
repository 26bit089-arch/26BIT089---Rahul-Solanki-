#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Quotient = %.2lf\n", a / b);
    }
    return 0;
}