#include <stdio.h>

void printNameN(const char *name, int count) {
    if (count <= 0) return;
    printf("%s\n", name);
    printNameN(name, count - 1);
}

int main() {
    char name[100];
    int n;
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter n: ");
    scanf("%d", &n);
    printNameN(name, n);
    return 0;
}