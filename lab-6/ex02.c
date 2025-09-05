#include <stdio.h>

int main(void) {
    char  name[3][101];
    int   age[3];
    float score[3];
    int I;

    for (I = 0; I < 3; I++) {
        printf("Student %d's name: ", I + 1);
        scanf(" %100[^\n]", name[I]); 

        printf("Student %d's age: ", I + 1);
        scanf("%d", &age[I]);

        printf("Student %d's score: ", I + 1);
        scanf("%f", &score[I]);
    }

   
    for (I = 0; I < 3; I++) {
        printf("Student %d name is \"%s\", age %d. score %.1f\n",
               I + 1, name[I], age[I], score[I]);
    }

   
    int maxIdx = 0;
    for (I = 1; I < 3; I++) {
        if (score[I] > score[maxIdx]) {
            maxIdx = I;
        }
    }
    printf("The highest scores belongs to %s at %.1f scores!\n",
           name[maxIdx], score[maxIdx]);

    return 0;
}