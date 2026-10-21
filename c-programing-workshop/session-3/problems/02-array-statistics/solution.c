/*
 * Problem 02 - Array Statistics
 * Session 3: Arrays
 *
 * Read n numbers into an array, then print count, sum, average,
 * minimum and maximum.
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: MAX_SIZE
 * Declared OUTSIDE every function, so main (and any function)
 * can use it. Lives for the whole program run.
 */
int MAX_SIZE = 1000;

int main()
{
    int numbers[MAX_SIZE];
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    /* Start min and max at the FIRST element, not at 0. */
    int sum = 0;
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 0; i < n; i++) {
        sum += numbers[i];          /* running total */

        if (numbers[i] < min) {     /* new smallest?   */
            min = numbers[i];
        }
        if (numbers[i] > max) {     /* new largest?    */
            max = numbers[i];
        }
    }

    float average = (float)sum / n;   /* cast so decimals are kept */

    printf("\n--- Statistics ---\n");
    printf("Count:   %d\n", n);
    printf("Sum:     %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
