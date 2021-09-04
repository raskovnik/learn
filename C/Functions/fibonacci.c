#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long long int fibonacci(unsigned int n) {
    if (0 == n || 1 == n) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    srand(time(NULL));
    unsigned int number = (rand() % 1000);
    unsigned long long int result = fibonacci(number);
    printf("fibonacci for %u: %llu\n",number, result);
}