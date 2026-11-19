#include <stdio.h>
#include <ctype.h>
#include <string.h>

void abbreviate_name(const char *full_name) {
    char words[50][100];
    int count = 0;
    int i = 0;

    while (full_name[i] != '\0') {
        while (full_name[i] == ' ' || full_name[i] == '\t') {
            i++;
        }
        if (full_name[i] == '\0') {
            break;
        }

        int j = 0;
        while (full_name[i] != '\0' && full_name[i] != ' ' && full_name[i] != '\t') {
            words[count][j++] = full_name[i++];
        }
        words[count][j] = '\0';
        count++;
    }

    for (int k = 0; k < count - 1; k++) {
        printf("%c. ", (char)toupper((unsigned char)words[k][0]));
    }
    if (count > 0) {
        printf("%s", words[count - 1]);
    }
    printf("\n");
}

int main() {
    int n;
    char line[256];

    printf("How many names do you want to enter? ");
    scanf("%d", &n);
    getchar(); // consume leftover newline

    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';

        printf("Abbreviated: ");
        abbreviate_name(line);
    }

    return 0;
}