#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int secretNumber, guess;
    int attempts = 0;

    // Generate random number
    srand(time(0));
    secretNumber = rand() % 10 + 1;   // Number between 1 and 10

    printf("🎮 Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 10.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        }
        else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("🎉 Congratulations! You guessed the number.\n");
            printf("Attempts taken: %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}


