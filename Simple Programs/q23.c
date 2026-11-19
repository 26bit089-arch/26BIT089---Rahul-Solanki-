#include <stdio.h>

int main() {
    double m1, m2, m3, total, average;
    printf("Enter marks of three subjects: ");
    scanf("%lf %lf %lf", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("Total = %.2lf\n", total);
    printf("Average = %.2lf\n", average);
    return 0;
}