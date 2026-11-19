#include <stdio.h>

int main() {
    char code;
    int boys = 0, girls = 0;
    printf("Enter sex code (M/m for boy, F/f for girl) for 50 students:\n");

    for (int i = 1; i <= 50; i++) {
        scanf(" %c", &code);
        if (code == 'M' || code == 'm') {
            boys++;
        } else if (code == 'F' || code == 'f') {
            girls++;
        }
    }
    printf("Boys = %d\n", boys);
    printf("Girls = %d\n", girls);
    return 0;
}