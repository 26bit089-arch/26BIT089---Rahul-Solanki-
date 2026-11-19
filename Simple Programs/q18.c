#include <stdio.h>

int main() {
    double l, b, area, perimeter;
    printf("Enter length (L) and breadth (B) of rectangle: ");
    scanf("%lf %lf", &l, &b);

    area = l * b;
    perimeter = 2.0 * (l + b);

    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);
    return 0;
}