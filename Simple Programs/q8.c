#include <stdio.h>

int main() {
    double dollars;
    printf("Enter amount in Dollars ($): ");
    scanf("%lf", &dollars);
    printf("Amount in Rs. = %.2lf\n", dollars * 48.0);
    return 0;
}