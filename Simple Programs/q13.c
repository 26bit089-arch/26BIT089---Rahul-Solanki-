#include <stdio.h>

int main() {
    double bytes;
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    double kb = bytes / 1024.0;
    double mb = kb / 1024.0;
    double gb = mb / 1024.0;

    printf("KB = %.4lf\n", kb);
    printf("MB = %.6lf\n", mb);
    printf("GB = %.8lf\n", gb);
    return 0;
}