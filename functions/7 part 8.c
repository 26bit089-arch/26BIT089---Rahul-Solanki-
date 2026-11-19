#include <stdio.h>

int sumOdd(int count, int curr) {
    if (count <= 0) return 0;
    return curr + sumOdd(count - 1, curr + 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d odd numbers = %d\n", n, sumOdd(n, 1));
    return 0;
}