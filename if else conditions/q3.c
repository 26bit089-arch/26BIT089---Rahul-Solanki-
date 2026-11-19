#include <stdio.h>

int main() {
    double gross, allowance = 0.0, deduction = 0.0, net;

    printf("Enter Gross Salary: ");
    scanf("%lf", &gross);

    if (gross > 10000) {
        allowance = 0.10 * gross;
        deduction = 0.03 * gross;
    } else if (gross > 5000) {
        allowance = 0.07 * gross;
        deduction = 0.02 * gross;
    } else {
        allowance = 0.0;
        deduction = 0.0;
    }

    net = gross + allowance - deduction;

    printf("Allowance = %.2lf\n", allowance);
    printf("Deduction = %.2lf\n", deduction);
    printf("Net Salary = %.2lf\n", net);

    return 0;
}