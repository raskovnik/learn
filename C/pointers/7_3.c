#include <stdio.h>
#define SIZE 10

int main() {
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    float *nptr = numbers;

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%0.1f   ", numbers[i]);
    }
    puts("");

    float *nptr1 = numbers;
    float *npts = (numbers + 0);

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%0.1f   ", *(numbers + i));
    }

    puts("");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%0.1f   ", nptr[i]);
    }
    puts("");

}