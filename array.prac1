#include <stdio.h>

#define STUDENTS 5

int get_average(int scores[], int n);  // Function prototype

int main(void) {
    int scores[STUDENTS] = {1, 2, 3, 4, 5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("The average is %d.\n", avg);

    return 0;
}

int get_average(int scores[], int n) {
    int i;
    int sum = 0;

    for (i = 0; i < n; i++) {
        sum += scores[i];
    }

    return sum / n;

    /* //extra work taught in the class, replacing the "return sum/n"
    #include <stdio.h>

#define STUDENTS 5

// Function prototype
int get_average(int scores[], int n);

int main(void) {
    int scores[STUDENTS] = {1, 2, 3, 4, 5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("The average is %d.\n", avg);

    return 0;
}

// Function definition
int get_average(int scores[], int n) {
    int i;
    int sum = 0;

    for (i = 0; i < n; i++) {
        sum += scores[i];
    }

    int average;
    average = sum / n;
    return average;
}

    */
}
