#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    if ((unsigned char)str1[i] > (unsigned char)str2[i]) {
        printf("\"%s\" is greater than \"%s\"\n", str1, str2);
    } else if ((unsigned char)str1[i] < (unsigned char)str2[i]) {
        printf("\"%s\" is lower than \"%s\"\n", str1, str2);
    } else {
        printf("Both strings are same\n");
    }

    return 0;
}