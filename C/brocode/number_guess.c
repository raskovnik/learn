#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 1;
    const int MAX = 100;

    int guess, answer;
    int guesses = 0;
    
    srand(time(0));
    answer = (rand() % MAX) + MIN;

    while (guess != answer) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess > answer) printf("Too high, try again\n");
        else if (guess < answer) printf("Too low, try again\n");
        else if (guess == answer) {
            printf("You guessed right, the answer is %d after %d guesses\n", guess, guesses + 1);
            break;
        }
        guesses += 1;


    }
}