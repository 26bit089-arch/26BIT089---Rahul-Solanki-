#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int left = 0;
    int right = (int)strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("It is a Palindrome string.\n");
    } else {
        printf("It is NOT a Palindrome string.\n");
    }

    return 0;
}