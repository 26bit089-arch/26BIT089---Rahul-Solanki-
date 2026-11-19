#include <stdio.h>

int main() {
    char str[200];
    int a = 0, e = 0, i_cnt = 0, o = 0, u = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'A') a++;
        else if (ch == 'e' || ch == 'E') e++;
        else if (ch == 'i' || ch == 'I') i_cnt++;
        else if (ch == 'o' || ch == 'O') o++;
        else if (ch == 'u' || ch == 'U') u++;
    }

    printf("Vowel frequencies:\n");
    printf("a / A : %d\n", a);
    printf("e / E : %d\n", e);
    printf("i / I : %d\n", i_cnt);
    printf("o / O : %d\n", o);
    printf("u / U : %d\n", u);

    return 0;
}