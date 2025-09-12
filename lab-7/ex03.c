#include <stdio.h>

int max_ptr(const int *p, int n) {
    const int *end = p + n;
    int maxv = *p;
    ++p;
    while (p < end) {
        if (*p > maxv) maxv = *p;
        ++p;
    }
    return maxv;
}

int main() {
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int n = sizeof array / sizeof *array;

    int maxv = max_ptr(array, n);
    printf("Max value: %d\n", maxv);
    return 0;
}