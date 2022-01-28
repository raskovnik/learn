#include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
    char s1[SIZE];
    char s2[SIZE];
    size_t n;

    puts("Enter string one: ");
    scanf("%s", s1);
    puts("");

    puts("Enter string two: ");
    scanf("%s", s2);
    puts("");

    puts("Enter the number of characters to be compared: ");
    scanf("%ld", &n);

    int print_u_index(char array[], size_t elements);

    int result = strncmp(s1, s2, n);
    result == 0? printf("%c is equal to %c\n", print_u_index(s1, n), print_u_index(s2, n)): (result > 0)? printf("%c is greater than %c\n", print_u_index(s1, n), print_u_index(s2, n)) : printf("%c is less than %c\n", print_u_index(s1, n), print_u_index(s2, n)); 
} 


int print_u_index(char array[], size_t elements) {
    for (int i = 0; i < elements - 1; i++) {
        if (i != elements - 1) {
            printf("%c", array[i]);
        } else {
            printf("%c\n", array[i]);
        }
    }
}