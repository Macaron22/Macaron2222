#include <stdio.h>

int main(void) {
    enum { N = 5 };
    int marks[N];
    int total, highest;

    printf("Enter the marks of student 1: ");
    scanf("%d", &marks[0]);
    total = highest = marks[0];

    for (int i = 1; i < N; ++i) {
        int x;
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &x);
        marks[i] = x;
        total += x;
        if (x > highest) highest = x;
    }

    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d\n", highest);
    return 0;
}

