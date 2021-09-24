#include <stdio.h>
#include <ctype.h>

void printCharacters(const char *s);

int main() {
    char string[] = "print characters of a string";

    puts("The string is: ");
    printCharacters(string);
    puts("");

}

void printCharacters(const char *s) {
    for (; *s != '\0'; ++s) { printf("%c", *s); }
}