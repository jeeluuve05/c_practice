#include <stdio.h>

#define STUDENTS 5

int main(void) {
    int scores[STUDENTS];
    int sum = 0;
    int i, average;

    // Input student grades
    for (i = 0; i < STUDENTS; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Calculate sum
    for (i = 0; i < STUDENTS; i++) {
        sum += scores[i];
    }

    // Calculate average
    average = sum / STUDENTS;

    // Print average
    printf("Grade average = %d\n", average);

    return 0;
}
