/*
 * Problem 01 - Print My Array
 * Session 3: Arrays
 *
 * Read n numbers into an array, then print each number with its index.
 */

#include <stdio.h>

#define MAX 100   /* the array can hold at most 100 numbers */

int main()
{
    int numbers[MAX];
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Please enter a value between 1 and %d.\n", MAX);
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
