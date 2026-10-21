/*
 * Problem 04 - Gradebook
 * Session 4: Functions
 *
 * Functions pasted unchanged from Problem 03 (sum, average) plus one new
 * tiny machine: char gradeOf(int score). One brain, every student.
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: MAX_SIZE
 * Declared OUTSIDE every function, so main AND all our functions
 * (sum, average, gradeOf, ...) can see it and use it.
 * Lives for the whole program run -- global vs local, from the slides.
 */
int MAX_SIZE = 1000;

/* ==================== pasted from Problem 03 (unchanged!) ============ */

int sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

float average(int arr[], int n)
{
    return (float)sum(arr, n) / n;
}

/* ==================== the one new machine ============================ */

char gradeOf(int score)
{
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

/* ==================== composed from the pieces ======================= */

/* a void machine that prints one line per student, reusing gradeOf */
void printScoresAndGrades(int scores[], int n)
{
    printf("\n--- Gradebook ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d -> %c\n", i + 1, scores[i], gradeOf(scores[i]));
    }
}

/* pass 2: needs the average, so it comes AFTER the average is computed */
int countAtOrAbove(int scores[], int n, float threshold)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold) {
            count++;
        }
    }
    return count;
}

/* ==================== main: read, delegate, compose ================== */

int main()
{
    int scores[MAX_SIZE];
    int n;

    printf("How many students? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    /* validating read -- Session 2's do-while, once per student */
    for (int i = 0; i < n; i++) {
        int score;
        do {
            printf("Enter score for student %d (0-100): ", i + 1);
            scanf("%d", &score);
            if (score < 0 || score > 100) {
                printf("Invalid score, try again (0-100): ");
            }
        } while (score < 0 || score > 100);
        scores[i] = score;
    }

    printScoresAndGrades(scores, n);

    float avg = average(scores, n);
    printf("\nClass average: %.2f\n", avg);
    printf("At or above average: %d student(s)\n",
           countAtOrAbove(scores, n, avg));

    return 0;
}
