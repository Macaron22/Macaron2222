#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, -1, 2},
        {0, 2, 4},
        {-1, 3, 5}
    };
    int temp;


    printf(" Original Matrix A \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }


    printf("\n Transposed Matrix A \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}