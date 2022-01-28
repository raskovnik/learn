#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 5

int main() {
    const char *articles[SIZE] = {"the ", "a ", "one ", "some ", "any "};
    const char *nouns[SIZE] = {"boy ", "girl ", "dog ", "town ", "car "};
    const char *verbs[SIZE] = {"drove ", "jumped ", "ran ", "walked ", "skipped "};
    const char *prepositions[SIZE] = {"to ", "from ", "over ", "under ", "on "};

    srand(time(NULL));
    char *sentence[25];
    for (int i=0; i<1; i++) {
        strcat(&sentence, articles[rand() % 5]);
        strcat(&sentence, nouns[rand() % 5]);
        strcat(&sentence, verbs[rand() % 5]);
        strcat(&sentence, prepositions[rand() % 5]);
        strcat(&sentence, articles[rand() % 5]);
        strcat(&sentence, nouns[rand() % 5]);
        printf("%s\n", sentence);
    }
}
