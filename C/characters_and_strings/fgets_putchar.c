#include <stdio.h>
#define SIZE 80

void reverse(const char * const s);

int main() {
    char sentence[SIZE];

    puts("Enter a line of text:");

    fgets(sentence, SIZE, stdin);

    printf("\n%s\n", "The line printed backward is:");
    reverse(sentence);


}

void reverse(const char * const s) {
    if ('\0' == s[0]) {
        return;
    } else {
        reverse(&s[1]);
        putchar(s[0]);
    }
}

// bad
// rev -> ad
d