#include <stdio.h>

void fn1(int a);
void fn2(int b);
void fn3(int c);

int main() {
    void (*f[3])(int) = {fn1, fn2, fn3};

    printf("%s", "Enter a number between 0 and 2, 3 to end: ");
    size_t  choice;
    scanf("%lu", &choice);

    while (choice >= 0 && choice < 3) {
        (*f[choice])(choice);

        printf("%s", "Enter a number between 0 and 2, 3 to end: ");
        scanf("%lu", &choice);
    }

    puts("Program execution completed");
}

void fn1(int a) {
    printf("You entered %d so fn1 was called\n\n", a);
}

void fn2(int b) {
    printf("You entered %d so fn2 was called\n\n", b);

}

void fn3(int c) {
    printf("You entered %d so fn3 was called\n\n", c);
}