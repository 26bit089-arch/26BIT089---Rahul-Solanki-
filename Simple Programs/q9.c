#include <stdio.h>

int main() {
    double rs;
    printf("Enter amount in Rs.: ");
    scanf("%lf", &rs);
    printf("Amount in Dollars ($) = %.2lf\n", rs / 48.0);
    return 0;
}