#include <stdio.h>

void printNeven(int count, int curr) {
    if (count <= 0) return;
    printf("%d ", curr);
    printNeven(count - 1, curr + 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printNeven(n, 2);
    printf("\n");
    return 0;
}