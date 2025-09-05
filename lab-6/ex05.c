#include <stdio.h>

typedef struct {
    int minute;
    int seconds;
} Time;

int main(void) {
    Time t[3];
    int total = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        if (scanf(" %d:%d", &t[i].minute, &t[i].seconds) != 2) {
            return 0; 
        }
        total += t[i].minute * 60 + t[i].seconds;
    }

    printf("Total time elasped: %d second(s)\n", total);
    return 0;
}
