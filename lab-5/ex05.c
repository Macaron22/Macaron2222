#include <stdio.h>

int main(void) {
    const int N = 8;
    int a[N];
    int min, max;

    for (int i = 0; i < N; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
        if (i == 0) {
            min = max = a[i];
        } else {
            if (a[i] < min) min = a[i];
            if (a[i] > max) max = a[i];
        }
    }

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);
    return 0;
}
