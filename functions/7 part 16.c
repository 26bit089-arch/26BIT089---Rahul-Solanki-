#include <stdio.h>

void findMinMax100(int remaining, int *largest, int *smallest) {
    if (remaining == 0) return;
    int x;
    scanf("%d", &x);
    if (x > *largest) *largest = x;
    if (x < *smallest) *smallest = x;
    findMinMax100(remaining - 1, largest, smallest);
}

int main() {
    int first, largest, smallest;
    printf("Enter 100 numbers:\n");
    scanf("%d", &first);
    largest = smallest = first;

    findMinMax100(99, &largest, &smallest);
    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}