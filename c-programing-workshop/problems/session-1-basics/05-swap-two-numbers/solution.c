/*
 * Problem 05 - Swap Two Numbers
 * Session 1: The Road to C
 *
 * Read two numbers and swap their values using a temporary variable.
 */

#include <stdio.h>

int main(void)
{
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    /* The three-step swap. Order matters!
     * Step 1: save a so we do not lose it.
     * Step 2: overwrite a with b.
     * Step 3: put the saved value into b. */
    temp = a;
    a = b;
    b = temp;

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}
