#include <stdio.h>

long long seriesSum(int n) {
    if (n <= 0) return 0;
    return (long long)n + seriesSum(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Series sum = %lld\n", seriesSum(n));
    return 0;
}