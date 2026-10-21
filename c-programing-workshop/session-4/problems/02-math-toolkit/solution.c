/*
 * Problem 02 - Math Toolkit
 * Session 4: Functions
 *
 * A small toolkit of reusable functions. The star: maxOfThree is built
 * ON TOP of maxOfTwo -- write once, use everywhere.
 */

#include <stdio.h>

/* ---- temperature converters (reused from Session 1 logic) ---- */
float celsiusToFahrenheit(float c)
{
    return c * 9.0 / 5.0 + 32;    /* 9.0 not 9: keep decimals alive */
}

float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5.0 / 9.0;
}

/* ---- comparisons ---- */
int maxOfTwo(int a, int b)
{
    if (a > b) {
        return a;
    }
    return b;
}

/* built on top of maxOfTwo -- no duplicated logic */
int maxOfThree(int a, int b, int c)
{
    int biggest = maxOfTwo(a, b);   /* reuse! */
    return maxOfTwo(biggest, c);
}

int isEven(int n)
{
    return n % 2 == 0;   /* the comparison IS the value: 1 or 0 */
}

int main()
{
    /* ---- converters ---- */
    float celsius, fahrenheit;

    printf("Enter a temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f F = %.2f C\n\n", fahrenheit, celsius);

    /* ---- comparisons ---- */
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Max of two : %d\n", maxOfTwo(a, b));

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Max of three: %d\n", maxOfThree(a, b, c));

    printf("\nEnter an integer to test: ");
    scanf("%d", &a);
    if (isEven(a)) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }

    return 0;
}
