#include <stdio.h>

void printOdd(int count, int curr) {
    if (count == 0) return;
    printf("%d ", curr);
    printOdd(count - 1, curr + 2);
}

int main() {
    printOdd(10, 1);
    printf("\n");
    return 0;
}