#include <stdio.h>

int main() {
    int i;

    printf("Multiplication table\n");

    for (i = 1; i <= 12; i++) {
        printf("2 * %d = %d\n", i, 2 * i);
    }

    return 0;
}