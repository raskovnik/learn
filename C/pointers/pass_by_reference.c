#include <stdio.h>

void cubeByReference(int *n);

int main () {
    int number = 5;

    printf("The original number is %d", number);

    cubeByReference(&number);

    printf("\nThe new value of the number is %d\n", number);
}

void cubeByReference(int *n) {*n = *n * *n * *n;}