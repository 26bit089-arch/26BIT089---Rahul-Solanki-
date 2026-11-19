#include <stdio.h>

int countDigits(long long n) {
    if (n < 0) n = -n;
    if (n < 10) return 1;
    return 1 + countDigits(n / 10);
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("Number of digits = %d\n", countDigits(n));
    return 0;
}