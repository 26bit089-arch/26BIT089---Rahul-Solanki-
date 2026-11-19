#include <stdio.h>

int main() {
    for (int n = 2; n <= 500; n++) {
        int isPrime = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}