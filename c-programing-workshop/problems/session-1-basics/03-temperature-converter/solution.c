/*
 * Problem 03 - Temperature Converter
 * Session 1: The Road to C
 *
 * Read a temperature in Celsius and convert it to Fahrenheit and Kelvin.
 */

#include <stdio.h>

int main(void)
{
    float celsius;
    float fahrenheit;
    float kelvin;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    kelvin = celsius + 273.15f;

    printf("\n--- Results ---\n");
    printf("Celsius:    %.2f C\n", celsius);
    printf("Fahrenheit: %.2f F\n", fahrenheit);
    printf("Kelvin:     %.2f K\n", kelvin);

    return 0;
}
