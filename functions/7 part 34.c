#include <stdio.h>

void printFib(int count, int a, int b) {
    if (count <= 0) return;
    printf("%d", a);
    if (count > 1) printf(", ");
    printFib(count - 1, b, a + b);
}

int main() {
    int n;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    printFib(n, 1, 1);
    printf("\n");
    return 0;
}