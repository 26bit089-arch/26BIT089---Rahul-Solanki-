#include <stdio.h>

void innerA(int i, int j) {
    if (j > i) return;
    printf("%d %d\n", i, j);
    innerA(i, j + 1);
}

void outerA(int i, int n) {
    if (i > n) return;
    innerA(i, 1);
    outerA(i + 1, n);
}

int main() {
    outerA(1, 3);
    return 0;
}