#include <stdio.h>

void printNodd(int count, int curr) {
    if (count <= 0) return;
    printf("%d ", curr);
    printNodd(count - 1, curr + 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printNodd(n, 1);
    printf("\n");
    return 0;
}