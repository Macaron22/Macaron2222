#include <stdio.h>

int main() {
    int a[5];

    printf("Enter 5 integers: ");
    int *p = a;
    int *end = a + 5;
    while (p < end) {
        if (scanf("%d", p) != 1) return 1;
        ++p;
    }

    for (int pass = 0; pass < 4; ++pass) {
        int *cur  = a;
        int *last = a + 4 - pass;
        while (cur < last) {
            int *next = cur + 1;
            if (*cur > *next) {
                int t = *cur; *cur = *next; *next = t;
            }
            ++cur;
        }
    }

    printf("Sorted: ");
    for (p = a; p < end; ++p) {
        printf("%d", *p);
        if (p + 1 < end) printf(" ");
    }
    printf("\n");

    return 0;
}
