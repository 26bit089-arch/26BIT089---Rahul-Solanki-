#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swapByValue function: x = %d, y = %d\n", x, y);
}

void printValues(const char *label, int a, int b) {
    printf("%s: a = %d, b = %d\n", label, a, b);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printValues("Before swap (in main)", a, b);
    swapByValue(a, b);
    printValues("After swap (in main)", a, b);

    return 0;
}