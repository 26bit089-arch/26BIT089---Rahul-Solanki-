#include <stdio.h>

int main() {
    double gross_sales, discount, net_sales;
    printf("Enter Gross Sales: ");
    scanf("%lf", &gross_sales);

    discount = 0.10 * gross_sales;
    net_sales = gross_sales - discount;

    printf("Discount (10%%) = %.2lf\n", discount);
    printf("Net Sales = %.2lf\n", net_sales);
    return 0;
}