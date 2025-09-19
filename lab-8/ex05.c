#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    printf("N: ");
    scanf("%d", &n);
    
    int arr[n];
    int evenSum = 0;
    int oddSum = 0;
    
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    printf("Output: Sum of even number: %d\n", evenSum);
    printf("Sum of odd number: %d\n", oddSum);
    
    return 0;
}