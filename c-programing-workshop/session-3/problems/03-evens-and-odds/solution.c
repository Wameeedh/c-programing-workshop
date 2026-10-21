/*
 * Problem 03 - Evens and Odds
 * Session 3: Arrays
 *
 * Read n numbers, split them into an even array and an odd array
 * (each with its own counter), then print both.
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: MAX_SIZE
 * Declared OUTSIDE every function, so every function in this file
 * can see it and use it. Lives for the whole program run.
 */
int MAX_SIZE = 1000;

int main()
{
    int numbers[MAX_SIZE];
    int evens[MAX_SIZE];
    int odds[MAX_SIZE];
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

    /* Two counters: each one is also the "next free box" of its array */
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evens[evenCount] = numbers[i];
            evenCount++;
        } else {
            odds[oddCount] = numbers[i];
            oddCount++;
        }
    }

    printf("\nEven numbers (%d): ", evenCount);
    for (int i = 0; i < evenCount; i++) {   /* note: evenCount, not n */
        printf("%d ", evens[i]);
    }

    printf("\nOdd numbers  (%d): ", oddCount);
    for (int i = 0; i < oddCount; i++) {    /* note: oddCount, not n */
        printf("%d ", odds[i]);
    }
    printf("\n");

    return 0;
}
