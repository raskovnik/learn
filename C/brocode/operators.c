#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;

    float z = x / y; //lose the decimal part
    float a = x / (float) y; //retain the decimal part

    printf("%f\n", z);
    printf("%f\n", a);

    return 0;
}