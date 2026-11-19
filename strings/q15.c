#include <stdio.h>

int main() {
    int mat[3][3];
    int *ptr = &mat[0][0];

    printf("Enter 9 elements for a 3x3 matrix:\n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", ptr + i);
    }

    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 1; i < 9; i++) {
        int val = *(ptr + i);
        if (val > largest) {
            largest = val;
        }
        if (val < smallest) {
            smallest = val;
        }
    }

    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}