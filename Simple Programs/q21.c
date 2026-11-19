#include <stdio.h>

int main() {
    double gross, allowance, deduction, net;
    printf("Enter Gross Salary: ");
    scanf("%lf", &gross);

    allowance = 0.10 * gross;
    deduction = 0.03 * gross;
    net = gross + allowance - deduction;

    printf("Allowance (10%%) = %.2lf\n", allowance);
    printf("Deduction (3%%) = %.2lf\n", deduction);
    printf("Net Salary = %.2lf\n", net);
    return 0;
}