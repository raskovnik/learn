#include <stdio.h>
#include <string.h>

int main() {
    for (int i = 0; i < 100; i++) {
        printf("%s\n", strerror(i));
    }
}