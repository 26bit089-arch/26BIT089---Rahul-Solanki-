#include <stdio.h>

long long reverseNum(long long n, long long rev) {
    if (n == 0) return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long sign = (n < 0) ? -1 : 1;
    long long abs_n = (n < 0) ? -n : n;
    printf("Reversed = %lld\n", sign * reverseNum(abs_n, 0));
    return 0;
}