/*
 * Problem 01 - Print My Array
 * Session 3: Arrays
 *
 * Read n numbers into an array, then print each number with its index.
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: MAX_SIZE
 * It is declared here, OUTSIDE every function (before main).
 * That means every function in this file can see it and use it,
 * and it stays alive for the whole program run.
 * (The old #define was replaced by this real variable in memory.)
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
        scanf("%d", &numbers[i]);   /* every element needs its own & */
    }

    printf("\n--- My Array ---\n");
    for (int i = 0; i < n; i++) {
        printf("Box %d: %d\n", i, numbers[i]);
    }

    return 0;
}
