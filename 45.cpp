//a guessing game program

#include <stdio.h>
int main() {
    int luckyNumber = 45; 
    int guess, attempts = 5;

    printf("Welcome to the Guessing Game!\n");
    printf("I have picked a lucky number between 1 and 100.\n");
    printf("You have %d attempts to guess it correctly.\n\n", attempts);

    // Loop for guessing attempts
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == luckyNumber) {
            printf("Congratulations! You guessed the lucky number %d.\n", luckyNumber);
            return 0; // Exit the program as the user has guessed correctly
        } else if (guess < luckyNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    // If all attempts are used
    printf("\nSorry, you've used all %d attempts. The lucky number was %d.\n", attempts, luckyNumber);

    return 0;
}

