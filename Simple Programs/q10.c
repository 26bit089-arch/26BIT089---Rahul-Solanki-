#include <stdio.h>

int main() {
    double dollars, rs, pounds;
    printf("Enter amount in Dollars ($): ");
    scanf("%lf", &dollars);

    rs = dollars * 48.0;
    pounds = rs / 70.0;

    printf("Amount in Pounds = %.2lf\n", pounds);
    return 0;
}