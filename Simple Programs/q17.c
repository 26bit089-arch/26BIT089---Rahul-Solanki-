#include <stdio.h>

int main() {
    double l, area, perimeter;
    printf("Enter side length (L) of square: ");
    scanf("%lf", &l);

    area = l * l;
    perimeter = 4.0 * l;

    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);
    return 0;
}