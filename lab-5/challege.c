#include <stdio.h>

int main() {
    int n;

    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int counted[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        counted[i] = 0; 
    }

 
    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        if (counted[i] == 1) continue; 

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);

    }

    return 0;
}