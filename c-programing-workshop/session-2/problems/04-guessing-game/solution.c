/*
 * Problem 04 - Number Guessing Game
 * Session 2: Control Structures
 *
 * The secret number is 42. Keep asking the user to guess until they find it.
 * Tell them if their guess is too high or too low, and count the attempts.
 *
 * Uses a do...while loop: the user must guess at least once.
 */

#include <stdio.h>

int main()
{
    const int SECRET = 42;   /* const: the secret never changes */
    int guess;
    int attempts = 0;

    printf("Guess the secret number (between 1 and 100)!\n");

    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > SECRET) {
            printf("Too high! Try again.\n");
        }
        else if (guess < SECRET) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("Correct! You found it in %d attempt(s).\n", attempts);
        }
    } while (guess != SECRET);   /* repeat while the guess is wrong */

    return 0;
}
