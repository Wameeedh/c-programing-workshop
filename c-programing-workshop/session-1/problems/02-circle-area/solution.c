/*
 * Problem 02 - Circle Area and Circumference
 * Session 1: The Road to C
 *
 * Read the radius, then compute the area and the circumference.
 */

#include <stdio.h>

const float PI = 3.14159f;   /* const = value that can never change */

int main()
{
    float radius;
    float area;
    float circumference;

    printf("Enter the radius: ");
    scanf("%f", &radius);          /* & = address of, tells scanf where to store */

    area = PI * radius * radius;   /* area = pi * r^2 */
    circumference = 2 * PI * radius;

    printf("Area          = %.2f\n", area);           /* %.2f = 2 digits after dot */
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
