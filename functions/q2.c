#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

void displayLeapStatus(int year) {
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    displayLeapStatus(year);

    return 0;
}