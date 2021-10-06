#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "This is a sentence with 7 tokens";

    printf("%s\n%s\n\n%s\n", "The string to b tokenized is: ", string,
        "The tokens are: ");
    
    char *tokenptr = strtok(string, " ");

    while (tokenptr != NULL) {
        printf("%s\n", tokenptr);
        tokenptr = strtok(NULL, " ");
    }
}