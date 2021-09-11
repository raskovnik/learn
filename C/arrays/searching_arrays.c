//linear search of an array

#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size){
    for (size_t n = 0; n < size; ++n){
        if (array[n] == key) {
            return n;
        }
    }

    return -1;
}
int main() {
    int a[SIZE];
    for (size_t x = 0; x< SIZE; ++x) {
        a[x] = 2 * x;

    }

    printf("Enter the integer search  key:");
    int searchKey;
    scanf("%d", &searchKey);


    size_t index = linearSearch(a, searchKey, SIZE);

    if (index != -1) {
        printf("Found value at index %ld\n", index);
    }
    else {
        puts("value not found");
    }
}
