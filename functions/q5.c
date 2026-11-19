#include <stdio.h>

void readArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void findMinMax(const int arr[], int n, int *maxVal, int *minVal) {
    *maxVal = arr[0];
    *minVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *maxVal) {
            *maxVal = arr[i];
        }
        if (arr[i] < *minVal) {
            *minVal = arr[i];
        }
    }
}

void printMinMax(int maxVal, int minVal) {
    printf("Maximum value = %d\n", maxVal);
    printf("Minimum value = %d\n", minVal);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }

    int arr[n];
    int maxVal, minVal;

    readArray(arr, n);
    findMinMax(arr, n, &maxVal, &minVal);
    printMinMax(maxVal, minVal);

    return 0;
}