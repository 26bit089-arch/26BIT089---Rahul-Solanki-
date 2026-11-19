#include <stdio.h>

int main() {
    double a, b, c, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Largest = %.2lf\n", largest);
    printf("Smallest = %.2lf\n", smallest);

    return 0;
}