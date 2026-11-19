#include <stdio.h>

int sumEven(int count, int curr) {
    if (count <= 0) return 0;
    return curr + sumEven(count - 1, curr + 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d even numbers = %d\n", n, sumEven(n, 2));
    return 0;
}