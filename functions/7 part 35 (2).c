#include <stdio.h>

void innerB(int i, int j, int maxJ) {
    if (j > maxJ) return;
    printf("%d %d\n", i, j);
    innerB(i, j + 1, maxJ);
}

void outerB(int i, int maxI, int maxJ) {
    if (i > maxI) return;
    innerB(i, 1, maxJ);
    outerB(i + 1, maxI, maxJ);
}

int main() {
    outerB(1, 2, 3);
    return 0;
}