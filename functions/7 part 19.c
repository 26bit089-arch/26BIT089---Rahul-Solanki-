#include <stdio.h>

void printDiv5(int curr, int end) {
    if (curr > end) return;
    if (curr % 5 == 0) printf("%d ", curr);
    printDiv5(curr + 1, end);
}

int main() {
    printDiv5(1, 100);
    printf("\n");
    return 0;
}