/*
 * Problem 04 - Average of Three Numbers
 * Session 1: The Road to C
 *
 * Read three integers, then print their average with 2 decimal places.
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Important: (a + b + c) is an int. We cast it to float so that
     * the division keeps the decimal part. Without the cast, 7 / 2 = 3. */
    average = (float)(a + b + c) / 3.0f;

    printf("Sum     = %d\n", a + b + c);
    printf("Average = %.2f\n", average);

    return 0;
}
