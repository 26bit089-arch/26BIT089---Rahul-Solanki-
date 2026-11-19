#include <stdio.h>

int sumDigits(long long n) {
    if (n < 0) n = -n;
    if (n == 0) return 0;
    return (int)(n % 10) + sumDigits(n / 10);
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("Sum of digits = %d\n", sumDigits(n));
    return 0;
}