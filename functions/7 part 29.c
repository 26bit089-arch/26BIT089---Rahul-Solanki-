#include <stdio.h>

int hasDivisor(int n, int d) {
    if ((long long)d * d > n) return 0;
    if (n % d == 0) return 1;
    return hasDivisor(n, d + 1);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    return !hasDivisor(n, 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is NOT a Prime number.\n", n);
    return 0;
}