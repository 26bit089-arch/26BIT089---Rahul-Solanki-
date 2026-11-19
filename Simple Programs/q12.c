#include <stdio.h>

int main() {
    double kg;
    printf("Enter weight in kg: ");
    scanf("%lf", &kg);
    printf("Weight in grams = %.2lf\n", kg * 1000.0);
    return 0;
}