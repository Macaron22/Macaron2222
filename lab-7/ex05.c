#include <stdio.h>

int main() {
    int size  = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };

    int sum = 0;
    int *p   = array;
    int *end = array + size;

    while (p < end) {
        sum += *p;
        ++p;
    }

    printf("The sum of array is: %d\n", sum);
    return 0;
}