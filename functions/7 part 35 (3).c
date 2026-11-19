#include <stdio.h>

void level3C(int i, int j, int k) {
    if (k > 2) return;
    printf("%d %d %d\n", i, j, k);
    level3C(i, j, k + 1);
}

void level2C(int i, int j) {
    if (j > 2) return;
    level3C(i, j, 1);
    level2C(i, j + 1);
}

void level1C(int i) {
    if (i > 2) return;
    level2C(i, 1);
    level1C(i + 1);
}

int main() {
    level1C(1);
    return 0;
}