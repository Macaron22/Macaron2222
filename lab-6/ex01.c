#include <stdio.h>

typedef struct {
    char name[100];
    int age;    
    float score; 
} Student;

int main(void) {
    Student s[3];
    int I;

    for (I = 0; I < 3; I++) {
        printf("Student %d's name: ", I + 1);
        scanf(" %99[^\n]", s[I].name);

        printf("Student %d's age: ", I + 1);
        scanf("%d", &s[I].age);

        printf("Student %d's score: ", I + 1);
        scanf("%f", &s[I].score);
    }

    for (I = 0; I < 3; I++) {
        printf("Student %d name is \"%s\", age %d. score %.1f\n",
               I + 1, s[I].name, s[I].age, s[I].score);
    }

    return 0;
}
