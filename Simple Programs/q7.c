#include <stdio.h>

int main() {
    double minutes;
    printf("Enter minutes: ");
    scanf("%lf", &minutes);
    printf("Hours = %.2lf\n", minutes / 60.0);
    return 0;
}