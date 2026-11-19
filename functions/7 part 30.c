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

void printPrimes(int curr, int end) {
    if (curr > end) return;
    if (isPrime(curr)) printf("%d ", curr);
    printPrimes(curr + 1, end);
}

int main() {
    printPrimes(1, 500);
    printf("\n");
    return 0;
}