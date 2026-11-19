#include <stdio.h>

void countSign200(int remaining, int *pos, int *neg, int *zero) {
    if (remaining == 0) return;
    int x;
    scanf("%d", &x);
    if (x > 0) (*pos)++;
    else if (x < 0) (*neg)++;
    else (*zero)++;
    countSign200(remaining - 1, pos, neg, zero);
}

int main() {
    int pos = 0, neg = 0, zero = 0;
    printf("Enter 200 values:\n");
    countSign200(200, &pos, &neg, &zero);
    printf("Positive = %d\nNegative = %d\nZeroes = %d\n", pos, neg, zero);
    return 0;
}