#include <stdio.h>

int main(void) {
    const int N = 10;
    int a[N];
    int even = 0, odd = 0;

    for (int i = 0; i < N; ++i) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            ++even;
        else
            ++odd;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return 0;
}