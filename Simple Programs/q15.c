#include <stdio.h>

int main() {
    double f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);

    c = (5.0 / 9.0) * (f - 32.0);
    printf("Celsius = %.2lf\n", c);
    return 0;
}