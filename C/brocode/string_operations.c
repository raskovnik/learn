#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Bro";
    char string2[] = "Code";

    strlwr(string1); //converst string to lowercase
    strupr(string1); //converts string to uppercase
    strcat(string1, string2); //appends string 2 to the end of string1
    strncat(string1, string2, 2); //appends n characters from string2 to string1
    strcpy(string1, string2); //copy string2 to string1
    strncpy(string1, string2, 1); // copy n characters of string2 to string1
    printf("%s", string1);

    return 0;
}