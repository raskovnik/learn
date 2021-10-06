#include <stdio.h>
#include <string.h>


int main() {
    const char *string1 = "abcdefghijklmnopqrstuvwxyz";

    const char *string2 = "four";
    const char *string3 = "boston";

    printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
        "The length of ", string1, " is ", strlen(string1), 
        "The length of ", string2, " is ", strlen(string2),
        "The length of ", string3, " is ", strlen(string3));
}