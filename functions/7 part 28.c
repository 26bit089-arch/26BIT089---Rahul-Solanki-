#include <stdio.h>

int sumProperDivisors(int n, int div) {
    if (div > n / 2) return 0;
    int add = (n % div == 0) ? div : 0;
    return add + sumProperDivisors(n, div + 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 1 && sumProperDivisors(n, 1) == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is NOT a Perfect number.\n", n);
    return 0;
}