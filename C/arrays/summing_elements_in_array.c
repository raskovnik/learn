#include <stdio.h>

int main() {
    int a[12] = {2, 45, 56, 234, 123, 35, 345, 562, 234, 1, 435, 46};
    int total = 0;

    for (size_t i = 0; i < (int) sizeof(a) / sizeof(a[0]); i++) {
        total += a[i];
    }

    printf("Total of array element values is %d\n", total);
}