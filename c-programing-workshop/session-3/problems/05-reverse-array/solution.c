/*
 * Problem 05 - Reverse Array
 * Session 3: Arrays
 *
 * Read numbers into a user-sized array (instructor pattern from P03),
 * then:
 *  1) print them in reverse order (backward loop)
 *  2) store a mirrored copy in a second array (reversed[size-1-i] = numbers[i])
 *     and print original and reversed side by side.
 *
 * No swapping needed -- we only walk and copy.
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

    printf("How many numbers? ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    /* Sized by the USER, at runtime */
    int numbers[size];
    int reversed[size];

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    /* ---- Part 1: print in reverse (backward loop) ---- */
    printf("\nBackwards: ");
    for (int i = size - 1; i >= 0; i--) {   /* start at last box, step -1 */
        printf("%d ", numbers[i]);
    }
    printf("\n");

    /* ---- Part 2: mirror into a second array ---- */
    for (int i = 0; i < size; i++) {
        reversed[size - 1 - i] = numbers[i];   /* the mirror formula */
    }

    printf("\nOriginal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nReversed: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
