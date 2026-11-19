#include <stdio.h>

int main() {
    int n, square, temp, power = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    temp = n;

    while (temp > 0) {
        power *= 10;
        temp /= 10;
    }

    if (square % power == n) {
        printf("Automorphic number\n");
    } else {
        printf("Not an automorphic number\n");
    }
    return 0;
}