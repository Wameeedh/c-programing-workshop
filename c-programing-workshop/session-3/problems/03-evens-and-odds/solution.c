/*
 * Problem 03 - Evens and Odds
 * Session 3: Arrays
 *
 * Read numbers into a user-sized array, split them into an even array
 * and an odd array (each with its own counter), then print both.
 *
 * NEW TECHNIQUE (instructor pattern): the user chooses the array's
 * size at runtime, and the global MAX_SIZE is only the ceiling.
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

    /* The user picks the size -- and MAX_SIZE keeps them safe */
    printf("How many numbers? ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    /* Sized by the USER, at runtime -- one box per number */
    int numbers[size];
    int evens[size];
    int odds[size];

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);   /* every element needs its own & */
    }

    /* Two counters: each one is also the "next free box" of its array */
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            evens[evenCount] = numbers[i];
            evenCount++;
        } else {
            odds[oddCount] = numbers[i];
            oddCount++;
        }
    }

    printf("\nEven numbers (%d): ", evenCount);
    for (int i = 0; i < evenCount; i++) {   /* note: evenCount, not size */
        printf("%d ", evens[i]);
    }

    printf("\nOdd numbers  (%d): ", oddCount);
    for (int i = 0; i < oddCount; i++) {    /* note: oddCount, not size */
        printf("%d ", odds[i]);
    }
    printf("\n");

    return 0;
}
