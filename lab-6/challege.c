#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 4

typedef struct {
    char  name[21];             
    int   id;
    float grades[NUM_SUBJECTS]; 
} Student;

int main(void) {
    const char *subjects[NUM_SUBJECTS] = {"Math", "English", "Science", "History"};
    Student s[NUM_STUDENTS];
    float student_avg[NUM_STUDENTS] = {0};
    float subject_sum[NUM_SUBJECTS] = {0};
    int I, J;

    for (I = 0; I < NUM_STUDENTS; I++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", I + 1);
        if (scanf("%20s %d %f %f %f %f",
                  s[I].name, &s[I].id,
                  &s[I].grades[0], &s[I].grades[1],
                  &s[I].grades[2], &s[I].grades[3]) != 6) {
            return 0;
        }
        float sum = 0.0f;
        for (J = 0; J < NUM_SUBJECTS; J++) {
            sum += s[I].grades[J];
            subject_sum[J] += s[I].grades[J];
        }
        student_avg[I] = sum / NUM_SUBJECTS;
    }

    printf("Student Averages:\n");
    for (I = 0; I < NUM_STUDENTS; I++) {
        printf("%s (ID: %d): %.2f\n", s[I].name, s[I].id, student_avg[I]);
    }

    int top_student_idx = 0;
    for (I = 1; I < NUM_STUDENTS; I++) {
        if (student_avg[I] > student_avg[top_student_idx]) {
            top_student_idx = I;
        }
    }
    printf("Top Student: %s with %.2f\n",
           s[top_student_idx].name, student_avg[top_student_idx]);

    printf("Subject Averages:\n");
    float subject_avg[NUM_SUBJECTS];
    for (J = 0; J < NUM_SUBJECTS; J++) {
        subject_avg[J] = subject_sum[J] / NUM_STUDENTS;
        printf("%s: %.2f\n", subjects[J], subject_avg[J]);
    }

    int top_subject_idx = 0;
    for (J = 1; J < NUM_SUBJECTS; J++) {
        if (subject_avg[J] > subject_avg[top_subject_idx]) {
            top_subject_idx = J;
        }
    }
    printf("Top Subject: %s with average %.2f\n",
           subjects[top_subject_idx], subject_avg[top_subject_idx]);

    return 0;
}
