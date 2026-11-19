#include <stdio.h>

int cubeSumDigits(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return (d * d * d) + cubeSumDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0 && cubeSumDigits(n) == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);
    return 0;
}