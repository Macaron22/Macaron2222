#include <stdio.h>

int main() {
    int A[3][3];
    int *p = &A[0][0];

    for (int i = 0; i < 9; ++i) { 
        *p = i + 1;
        ++p;
    }

    p = &A[0][0];
    printf("Matrix A (3x3):\n");
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            printf("%3d", *p);
            ++p; 
        }
        printf("\n");
    }

    float x = 3.5f, y = -1.25f;
    float *px = &x, *py = &y;
    printf("\nBefore swap: x=%.2f, y=%.2f\n", *px, *py);
    float tmp = *px; *px = *py; *py = tmp;
    printf("After  swap: x=%.2f, y=%.2f\n", *px, *py);

    struct S { int first, second, sum; };
    struct S s = {12, 30, 0};
    struct S *ps = &s;
    ps->sum = ps->first + ps->second;
    printf("\nStruct S: first=%d, second=%d, sum=%d\n", ps->first, ps->second, ps->sum);

    return 0;
}