#include <stdio.h>

void printEven(int count, int curr) {
    if (count == 0) return;
    printf("%d ", curr);
    printEven(count - 1, curr + 2);
}

int main() {
    printEven(10, 2);
    printf("\n");
    return 0;
}