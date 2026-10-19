/*
 * Problem 03 - Multiplication Table
 * Session 2: Control Structures
 *
 * Read a number and print its multiplication table from 1 to 10.
 */

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nMultiplication table of %d:\n", number);
    printf("------------------------\n");

    /* for (start ; keep going while ; step ) */
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %3d\n", number, i, number * i);
    }

    return 0;
}
