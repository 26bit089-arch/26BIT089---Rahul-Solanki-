#include <stdio.h>

int main() {
    double grams;
    printf("Enter weight in grams: ");
    scanf("%lf", &grams);
    printf("Weight in kg = %.3lf\n", grams / 1000.0);
    return 0;
}