/*
 * Problem 04 - Linear Search
 * Session 3: Arrays
 *
 * Read numbers into a user-sized array (instructor pattern from P03),
 * then find a target:
 *  - position of the FIRST occurrence (found flag + break)
 *  - every position where it appears (counter-index pattern)
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: MAX_SIZE
 * Declared OUTSIDE every function, so every function in this file
 * can see it and use it. Lives for the whole program run.
 * Here MAX_SIZE is the CEILING on the user-chosen size.
 */
int MAX_SIZE = 1000;

int main()
{
    int size;
    int target;

    printf("How many numbers? ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    /* Sized by the USER, at runtime */
    int numbers[size];
    int positions[size];   /* saves where the target appears */

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Which value do you want to find? ");
    scanf("%d", &target);

    /* ---- Part 1: first occurrence ---- */
    int foundAt = -1;   /* -1 means "not seen yet" */

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            foundAt = i;
            break;   /* we only need the first one */
        }
    }

    if (foundAt == -1) {
        printf("\n%d is not in the array.\n", target);
        return 0;
    }
    printf("\nFirst occurrence of %d is at position %d.\n", target, foundAt);

    /* ---- Part 2: every occurrence ---- */
    int posCount = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            positions[posCount] = i;
            posCount++;
        }
    }

    printf("%d also appears at positions: ", target);
    for (int i = 0; i < posCount; i++) {
        printf("%d ", positions[i]);
    }
    printf("\n");

    return 0;
}
