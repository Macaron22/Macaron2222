#include <stdio.h>
#include <math.h>

float calculateAverage(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return (float)sum / n;
}

int findHighest(int grades[], int n) {
    int highest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

int findLowest(int grades[], int n) {
    int lowest = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    char names[n][50];
    int grades[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }
    
    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", calculateAverage(grades, n));
    printf("Highest grade: %d\n", findHighest(grades, n));
    printf("Lowest grade: %d\n", findLowest(grades, n));
    printf("Students who passed:\n");
    
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) {
            printf("%s\n", names[i]);
        }
    }
    
    return 0;
}