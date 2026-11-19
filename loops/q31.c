#include <stdio.h>

int main() {
    int sum = 0;
    for (int n = 2; n <= 500; n++) {
        int isPrime = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            sum += n;
        }
    }
    printf("Sum of primes (1 to 500) = %d\n", sum);
    return 0;
}