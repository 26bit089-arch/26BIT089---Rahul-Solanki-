#include <stdio.h>

int sumDiv3(int curr, int end) {
    if (curr > end) return 0;
    int add = (curr % 3 == 0) ? curr : 0;
    return add + sumDiv3(curr + 1, end);
}

int main() {
    printf("Sum (1 to 100) divisible by 3 = %d\n", sumDiv3(1, 100));
    return 0;
}