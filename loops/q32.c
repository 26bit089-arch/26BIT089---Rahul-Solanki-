#include <stdio.h>

int main() {
    int count = 0;
    for (int n = 2; n <= 500; n++) {
        int isPrime = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }
    printf("Count of primes (1 to 500) = %d\n", count);
    return 0;
}