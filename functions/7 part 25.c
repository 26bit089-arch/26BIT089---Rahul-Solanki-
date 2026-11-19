#include <stdio.h>

long long revHelper(long long n, long long rev) {
    if (n == 0) return rev;
    return revHelper(n / 10, rev * 10 + (n % 10));
}

int isPalindrome(long long n) {
    if (n < 0) return 0;
    return n == revHelper(n, 0);
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (isPalindrome(n))
        printf("%lld is a Palindrome number.\n", n);
    else
        printf("%lld is NOT a Palindrome number.\n", n);
    return 0;
}