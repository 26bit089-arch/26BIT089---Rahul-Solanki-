#include <stdio.h>
#include <ctype.h>

void countGender50(int remaining, int *boys, int *girls) {
    if (remaining == 0) return;
    char code;
    scanf(" %c", &code);
    code = (char)tolower((unsigned char)code);
    if (code == 'm' || code == 'b') (*boys)++;
    else if (code == 'f' || code == 'g') (*girls)++;
    countGender50(remaining - 1, boys, girls);
}

int main() {
    int boys = 0, girls = 0;
    printf("Enter sex code (M/F) for 50 students:\n");
    countGender50(50, &boys, &girls);
    printf("Boys = %d\nGirls = %d\n", boys, girls);
    return 0;
}