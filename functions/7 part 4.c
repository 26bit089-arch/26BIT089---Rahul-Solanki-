#include <stdio.h>

void printNnatural(int curr, int n) {
    if (curr > n) return;
    printf("%d ", curr);
    printNnatural(curr + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printNnatural(1, n);
    printf("\n");
    return 0;
}