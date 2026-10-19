/*
 * Problem 05 - Simple Calculator Menu
 * Session 2: Control Structures
 *
 * Show a menu and let the user pick an operation:
 *   1) Add   2) Subtract   3) Multiply   4) Divide   5) Exit
 *
 * Uses a while loop to keep the menu alive, and switch/case to choose.
 */

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    while (1) {   /* keep showing the menu until the user exits */

        printf("\n===== Calculator =====\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("5) Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Goodbye!\n");
            break;              /* leave the while loop */
        }

        /* For options 1-4 we need two numbers. */
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Result: %.2f\n", a + b);
                break;
            case 2:
                printf("Result: %.2f\n", a - b);
                break;
            case 3:
                printf("Result: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: cannot divide by zero.\n");
                } else {
                    printf("Result: %.2f\n", a / b);
                }
                break;
            default:
                printf("Invalid option. Please choose 1-5.\n");
        }
    }

    return 0;
}
