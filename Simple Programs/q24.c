#include <stdio.h>

int main() {
    double a, b, temp;
    printf("Enter two values (a and b): ");
    scanf("%lf %lf", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %.2lf, b = %.2lf\n", a, b);
    return 0;
}