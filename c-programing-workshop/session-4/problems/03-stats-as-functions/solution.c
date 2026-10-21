/*
 * Problem 03 - Stats as Functions
 * Session 4: Functions
 *
 * Refactor of Session 3, Problem 02 (array statistics): the exact same
 * logic, re-shaped into reusable functions.
 *
 * Rule of the session: arrays ride into functions as "int arr[]"
 * together with their length n.
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: MAX_SIZE
 * Declared OUTSIDE every function, so main AND all our functions
 * can see it and use it. Lives for the whole program run.
 * This is the "global vs local variables" idea from the slides:
 * a local variable dies with its function; a global one stays.
 * Here MAX_SIZE is the CEILING on the user-chosen array size.
 */
int MAX_SIZE = 1000;

/* ---- typed functions: one loop + one job each ---- */

int sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int minValue(int arr[], int n)
{
    int min = arr[0];                 /* start at the first element */
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int maxValue(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/* reuses sum() -- no new loop needed */
float average(int arr[], int n)
{
    return (float)sum(arr, n) / n;
}

/* ---- void function: calls ALL of the above and prints ---- */
void printStatistics(int arr[], int n)
{
    printf("\n--- Statistics ---\n");
    printf("Count:   %d\n", n);
    printf("Sum:     %d\n", sum(arr, n));
    printf("Average: %.2f\n", average(arr, n));
    printf("Minimum: %d\n", minValue(arr, n));
    printf("Maximum: %d\n", maxValue(arr, n));
}

int main()
{
    int size;

    /* The user picks the size -- MAX_SIZE is only the ceiling */
    printf("How many numbers? ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    /* Sized by the USER, at runtime (instructor pattern from Session 3) */
    int numbers[size];

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    /* main reads the data and delegates -- the functions do the work
       (the functions receive the array and its length n = size) */
    printStatistics(numbers, size);

    return 0;
}
