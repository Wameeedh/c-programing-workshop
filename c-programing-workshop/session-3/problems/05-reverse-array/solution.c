/*
 * Problem 05 - Reverse Array
 * Session 3: Arrays
 *
 * Read n numbers, then:
 *  1) print them in reverse order (backward loop)
 *  2) store a mirrored copy in a second array (reversed[n-1-i] = numbers[i])
 *     and print original and reversed side by side.
 *
 * No swapping needed -- we only walk and copy.
 */

#include <stdio.h>

#define MAX 100   /* maximum size for every array */

int main()
{
    int numbers[MAX];
    int reversed[MAX];
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Please enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    /* ---- Part 1: print in reverse (backward loop) ---- */
    printf("\nBackwards: ");
    for (int i = n - 1; i >= 0; i--) {   /* start at last box, step -1 */
        printf("%d ", numbers[i]);
    }
    printf("\n");

    /* ---- Part 2: mirror into a second array ---- */
    for (int i = 0; i < n; i++) {
        reversed[n - 1 - i] = numbers[i];   /* the mirror formula */
    }

    printf("\nOriginal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nReversed: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
