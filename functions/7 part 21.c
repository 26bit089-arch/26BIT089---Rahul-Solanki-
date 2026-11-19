#include <stdio.h>

void separateDigits(long long n) {
    if (n < 0) n = -n;
    printf("%lld", n % 10);
    if (n >= 10) {
        printf(", ");
        separateDigits(n / 10);
    }
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    separateDigits(n);
    printf("\n");
    return 0;
}