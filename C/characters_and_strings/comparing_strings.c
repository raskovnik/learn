#include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
    char s1[SIZE];
    char s2[SIZE];

    puts("Enter string one: ");
    scanf("%s", s1);
    puts("");

    puts("Enter string two: ");
    scanf("%s", s2);
    puts("");

    int result = strcmp(s1, s2);
    result == 0? printf("'%s' is equal to '%s'\n", s1, s2): (result > 0)? printf("'%s' is greater than '%s'\n", s1, s2) : printf("'%s' is less than '%s'\n", s1, s2); 
} 