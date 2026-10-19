/*
 * Problem 01 - Grade Classifier
 * Session 2: Control Structures
 *
 * Read a score from 0 to 100 and print the matching letter grade.
 *
 *   90 - 100 -> A
 *   80 -  89 -> B
 *   70 -  79 -> C
 *   60 -  69 -> D
 *    0 -  59 -> F
 */

#include <stdio.h>

int main()
{
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    /* Validate the input range first. */
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
    }
    else if (score >= 90) {          /* first matching branch wins */
        printf("Grade: A\n");
    }
    else if (score >= 80) {          /* only checked if score < 90 */
        printf("Grade: B\n");
    }
    else if (score >= 70) {
        printf("Grade: C\n");
    }
    else if (score >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
