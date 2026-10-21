/*
 * Problem 05 - Menu Calculator
 * Session 4: Functions
 *
 * The full combo: menu loop + switch + typed functions.
 * The calculator stays open until the user chooses Exit.
 */

#include <stdio.h>

/* ---- the math machines ---- */

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

/* the zero-guard lives INSIDE the machine: every caller is protected */
float divide(float a, float b)
{
    if (b == 0) {
        printf("Cannot divide by zero.\n");
        return 0;
    }
    return a / b;
}

/* ---- the input machine: prints the menu and returns a valid choice --- */

int getMenuChoice(void)
{
    int choice;

    printf("\n==== Menu Calculator ====\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Choose (1-5): ");
    scanf("%d", &choice);

    return choice;
}

int main()
{
    int choice = getMenuChoice();

    while (choice != 5) {
        if (choice < 1 || choice > 5) {
            printf("Invalid choice, try again.\n");
        } else {
            float a, b, result;
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            switch (choice) {
                case 1:
                    result = add(a, b);
                    printf("%.2f + %.2f = %.2f\n", a, b, result);
                    break;
                case 2:
                    result = subtract(a, b);
                    printf("%.2f - %.2f = %.2f\n", a, b, result);
                    break;
                case 3:
                    result = multiply(a, b);
                    printf("%.2f * %.2f = %.2f\n", a, b, result);
                    break;
                case 4:
                    result = divide(a, b);
                    if (b != 0) {   /* divide already printed the warning */
                        printf("%.2f / %.2f = %.2f\n", a, b, result);
                    }
                    break;
            }
        }

        choice = getMenuChoice();   /* ask again after every operation */
    }

    printf("\nGoodbye!\n");
    return 0;
}
