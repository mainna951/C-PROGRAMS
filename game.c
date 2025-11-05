/*
NAME: JOSEPH THUO
REG NO: CT100/G/26131/25
DATE: 09 OCT 2025
DESCRIPTION: C PROGRAM THAT IMPLEMENTS A NUMBER GUESSING GAME
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    // Set up random number between 1 and 20
    srand(time(0));
    secret = (rand() % 20) + 1;

    // Ask the user to guess
    printf("Guess the number (1 to 20): ");
    scanf("%d", &guess);

    // Repeat until correct guess
    while (guess != secret) {
        if (guess > secret) {
            printf("Too high!\n Try again: ");
        } else {
            printf("Too low! \nTry again: ");
        }
        scanf("%d", &guess);
    }

	
    // Correct guess
    printf("Congratulations! You guessed it.\n");

    return 0;
}

