#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num >= 1 && num <= 100) {
        case 1: 
            switch (num % 2) {
                case 0:
                    printf("%d is even\n", num);
                    break;
                case 1:
                    printf("%d is odd\n", num);
                    break;
            }
            break;
        case 0:
            printf("%d is out of range\n", num);
            break;
    }

    return 0;
}