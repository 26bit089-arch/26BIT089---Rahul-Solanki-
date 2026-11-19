#include <stdio.h>

int main() {
    int n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (rev == n) {
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome number\n");
    }
    return 0;
}