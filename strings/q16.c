#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *books[3];

    for (int i = 0; i < 3; i++) {
        books[i] = (char *)malloc(100 * sizeof(char));
        printf("Enter name of book %d: ", i + 1);
        fgets(books[i], 100, stdin);
        books[i][strcspn(books[i], "\n")] = '\0';
    }

    printf("\nBook names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }

    for (int i = 0; i < 3; i++) {
        free(books[i]);
    }

    return 0;
}