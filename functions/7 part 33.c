#include <stdio.h>

long long pow10Rec(int digits) {
    if (digits <= 0) return 1;
    return 10LL * pow10Rec(digits - 1);
}

int countDigitsRec(long long n) {
    if (n < 10) return 1;
    return 1 + countDigitsRec(n / 10);
}

int isAutomorphic(long long n) {
    if (n < 0) return 0;
    long long sq = n * n;
    long long mod = pow10Rec(countDigitsRec(n));
    return (sq % mod) == n;
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (isAutomorphic(n))
        printf("%lld is an Automorphic number.\n", n);
    else
        printf("%lld is NOT an Automorphic number.\n", n);
    return 0;
}