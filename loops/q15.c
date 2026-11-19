#include <stdio.h>

int main() {
    int n;
    float num, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%f", &num);
        sum += num;
    }
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", sum / n);
    return 0;
}