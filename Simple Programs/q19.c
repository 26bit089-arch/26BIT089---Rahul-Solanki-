#include <stdio.h>

int main() {
    double r, area;
    printf("Enter radius (R) of circle: ");
    scanf("%lf", &r);

    area = (22.0 / 7.0) * r * r;
    printf("Area = %.2lf\n", area);
    return 0;
}