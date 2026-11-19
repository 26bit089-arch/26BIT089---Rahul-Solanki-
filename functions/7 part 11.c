#include <stdio.h>

void printName5(const char *name, int count) {
    if (count == 0) return;
    printf("%s\n", name);
    printName5(name, count - 1);
}

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name);
    printName5(name, 5);
    return 0;
}