#include <stdio.h>

void printNatural(int curr, int limit) {
    if (curr > limit) return;
    printf("%d ", curr);
    printNatural(curr + 1, limit);
}

int main() {
    printNatural(1, 10);
    printf("\n");
    return 0;
}