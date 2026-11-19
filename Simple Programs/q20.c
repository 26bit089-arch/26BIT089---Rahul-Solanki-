#include <stdio.h>

int main() {
    double h, l, area;
    printf("Enter height (H) and base/length (L) of triangle: ");
    scanf("%lf %lf", &h, &l);

    area = (h * l) / 2.0;
    printf("Area = %.2lf\n", area);
    return 0;
}