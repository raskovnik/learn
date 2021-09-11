#include <stdio.h>

int main() {
    int n[5] = {1, 2, 3, 4, 5};

    printf("%s%14s\n", "Element", "Value");

    for (size_t i = 0; i < 5; i++) {
        printf("%7lu%14d\n", i, n[i]);
    }
}