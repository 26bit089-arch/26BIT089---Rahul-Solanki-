#include <stdio.h>

void printParallelA(int left, int right) {
    if (left > 3 || right < 3) return;
    printf("%d %d\n", left, right);
    printParallelA(left + 1, right - 1);
}

int main() {
    printParallelA(1, 5);
    return 0;
}