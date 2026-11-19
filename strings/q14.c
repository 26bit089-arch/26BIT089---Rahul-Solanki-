#include <stdio.h>

int main() {
    int mat[4][4];
    int arr[16];
    int k = 0;

    printf("Enter 16 elements for a 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &mat[i][j]);
            arr[k++] = mat[i][j];
        }
    }

    // Bubble sort on the 1D array (ascending)
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted elements in 1D array:\n");
    for (int i = 0; i < 16; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}