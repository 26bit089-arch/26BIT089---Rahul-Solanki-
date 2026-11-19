#include <stdio.h>

int main() {
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (a > b) {
        printf("Largest = %.2lf\n", a);
        printf("Smallest = %.2lf\n", b);
    } else if (b > a) {
        printf("Largest = %.2lf\n", b);
        printf("Smallest = %.2lf\n", a);
    } else {
        printf("Both numbers are equal (%.2lf).\n", a);
    }

    return 0;
}