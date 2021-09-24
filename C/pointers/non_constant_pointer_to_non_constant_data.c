#include <stdio.h>
#include <ctype.h>

void convert_to_upper(char *s);

int main() {
    char string[] = "cHaRaCters and $32.98";

    printf("The string before conversion is : %s", string);
    convert_to_upper(string);

    printf("\nThe string after conversion is : %s\n", string);

}

void convert_to_upper(char *s) {
    while (*s != '\0') {
        *s = toupper(*s);
        ++s;
    }
}