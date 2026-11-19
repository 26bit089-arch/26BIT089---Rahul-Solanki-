#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[50][50], b[50][50], sum[50][50], diff[50][50], prod[50][50];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition and Subtraction
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nAddition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    // Multiplication (valid when cols == rows for square/compatible dimensions)
    if (rows == cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                prod[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    prod[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nMultiplication:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d\t", prod[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication skipped: requires square dimensions (%d x %d) for same-size matrices.\n", rows, cols);
    }

    return 0;
}
