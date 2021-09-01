#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int number = rand() % 1000;
    int guess;
    int guess_count = 0;

    printf("I have a number between 1 and 1000\n");

    while (number) {
        printf("Enter your guess: \n");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Low. Try again!\n");
            guess_count += 1;
        } else if (guess > number) {
            printf("High. Try again!\n");
            guess_count += 1;
        } else if (guess == number) {
            printf("You guessed right! You are amazing!!\nYou got it after %d guesses \n", guess_count);
            break;
        }

    }
}