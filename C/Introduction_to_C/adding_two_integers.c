#include <stdio.h>

int main(void) {
    int integer1;
    int integer2;

    printf("Enter first integer\n");
    scanf("%d", &integer1); // read an integer

    printf("Enter second integer\n");
    scanf("%d", &integer2); // read second integer

    int sum;
    sum = integer1 + integer2;

    printf("The sum is %d\n", sum);
    
}