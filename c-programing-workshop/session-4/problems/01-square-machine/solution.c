/*
 * Problem 01 - Square Machine
 * Session 4: Functions
 *
 * Two functions for the same job:
 *  - int square(int x)      : typed -> returns the result
 *  - void printSquare(int x): void  -> prints, returns nothing.
 */

#include <stdio.h>

/*
 * GLOBAL VARIABLE: SIZE
 * Declared OUTSIDE every function, so every function in this file
 * can see it and use it. Lives for the whole program run.
 * (Local variables live and die inside their own function.)
 */
int SIZE = 3;

/* ---- typed function: gives the value back ---- */
int square(int x)
{
    return x * x;
}

/* ---- void function: does the printing itself ---- */
void printSquare(int x)
{
    printf("%d squared is %d\n", x, x * x);
}

int main()
{
    int numbers[SIZE];
    int squares[SIZE];

    printf("Enter %d numbers: ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\nUsing square()    : ");
    for (int i = 0; i < SIZE; i++) {
        squares[i] = square(numbers[i]);   /* keep the returned value */
        printf("%d ", squares[i]);
    }
    printf("\n");

    printf("Using printSquare():\n");
    for (int i = 0; i < SIZE; i++) {
        printSquare(numbers[i]);           /* call it, it prints */
    }

    return 0;
}
