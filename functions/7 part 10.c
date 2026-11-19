#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return (unsigned long long)n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        printf("%d! = %llu\n", n, factorial(n));
    }
    return 0;
}