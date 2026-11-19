#include <stdio.h>

int main() {
    double hours;
    printf("Enter hours: ");
    scanf("%lf", &hours);
    printf("Minutes = %.2lf\n", hours * 60.0);
    return 0;
}