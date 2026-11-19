#include <stdio.h>

int sumDiv13(int curr, int end) {
    if (curr > end) return 0;
    int add = (curr % 13 == 0) ? curr : 0;
    return add + sumDiv13(curr + 1, end);
}

int main() {
    printf("Sum (1 to 100) divisible by 13 = %d\n", sumDiv13(1, 100));
    return 0;
}