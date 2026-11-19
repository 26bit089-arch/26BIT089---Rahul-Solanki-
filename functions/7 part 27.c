#include <stdio.h>

void printFactors(int n, int div, int *first) {
    if (div > n) return;
    if (n % div == 0) {
        if (!(*first)) printf(", ");
        printf("%d", div);
        *first = 0;
    }
    printFactors(n, div + 1, first);
}

int main() {
    int n, first = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }
    printFactors(n, 1, &first);
    printf("\n");
    return 0;
}