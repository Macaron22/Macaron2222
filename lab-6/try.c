#include <stdio.h>

#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN];
    int age;
} Student;

int main(void) {
    Student s[10];  

    for (int I = 0; I < 10; I++) {
        printf("Student[%d]\n", I);
        printf("\tname: ");
        scanf("%49s", s[I].name);   
        printf("\tage: ");
        scanf("%d", &s[I].age);
    }

    printf("\nStudents older than 20:\n");
    for (int I = 0; I < 10; I++) {
        if (s[I].age > 20) {
            printf("%s, %d\n", s[I].name, s[I].age);
        }
    }

    return 0;
}