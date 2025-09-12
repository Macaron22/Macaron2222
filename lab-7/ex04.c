#include <stdio.h>

int main() {
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };

    int *p   = array; 
    int *end = array + size;

    while (p < end) {
        printf("%d\n", *p);
        ++p; 
    }
    return 0;
}