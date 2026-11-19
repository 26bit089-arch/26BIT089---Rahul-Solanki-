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

int countPrimes(int curr, int end) {
    if (curr > end) return 0;
    int add = isPrime(curr) ? 1 : 0;
    return add + countPrimes(curr + 1, end);
}

int main() {
    printf("Total primes (1 to 500) = %d\n", countPrimes(1, 500));
    return 0;
}s