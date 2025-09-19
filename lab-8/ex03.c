#include <stdio.h>
int square(int num) {
    return num * num;
}

int sumOfSquares(int num1, int num2) {
    return square(num1) + square(num2);
}

int main() {
    int num1, num2;
    
    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = sumOfSquares(num1, num2);
    
    printf("Sum of squares of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}