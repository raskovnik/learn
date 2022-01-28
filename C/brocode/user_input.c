#include <stdio.h>

int main() {
    int age;
    char name[24];

    printf("What's your name?\n");
    // scanf("%s", name); //scanf doesn't read whitespaces
    
    fgets(name, 24, stdin);
    printf("Hello %s\n", name);

    printf("How old are you?: \n");
    scanf("%d", &age);

    printf("You are %d years old\n", age);

    return 0;
}