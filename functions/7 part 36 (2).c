#include <stdio.h>

void printParallelB(int step) {
    if (step > 5) return;

    if (step == 1) printf("1 5 2 4\n");
    else if (step == 2) printf("1 5 3 3\n");
    else if (step == 3) printf("2 4 4 2\n");
    else if (step == 4) printf("2 4 5 1\n");
    else if (step == 5) printf("3 3 3 3\n");

    printParallelB(step + 1);
}

int main() {
    printParallelB(1);
    return 0;
}