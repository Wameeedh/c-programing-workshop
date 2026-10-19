/*
 * Problem 02 - Leap Year Checker
 * Session 2: Control Structures
 *
 * A year is a leap year if:
 *   - it is divisible by 4, AND
 *   - it is NOT divisible by 100,
 *   - UNLESS it is divisible by 400.
 *
 * Examples: 2000 is a leap year, 1900 is not, 2024 is.
 */

#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    /* && means AND, || means OR, != means "not equal".
     * The parentheses show the two special cases clearly:
     *   (divisible by 400) OR (divisible by 4 but not by 100) */
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
