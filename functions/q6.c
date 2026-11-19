#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

void showMenu() {
    printf("\n--- Calculator Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1-4): ");
}

void calculate(int choice, double a, double b) {
    switch (choice) {
        case 1:
            printf("Result = %.2lf\n", add(a, b));
            break;
        case 2:
            printf("Result = %.2lf\n", subtract(a, b));
            break;
        case 3:
            printf("Result = %.2lf\n", multiply(a, b));
            break;
        case 4:
            if (b == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                printf("Result = %.2lf\n", divide(a, b));
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
}

int main() {
    int choice;
    double a, b;

    showMenu();
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    calculate(choice, a, b);

    return 0;
}