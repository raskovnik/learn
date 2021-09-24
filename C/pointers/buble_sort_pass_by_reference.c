#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, const size_t size);

int main() {
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    puts("Data items in original order: ");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);

    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    puts("");
 
}

void bubbleSort(int * const array, const size_t size) {
    void swap(int *index1, int *index2);

    for (unsigned int pass = 0; pass < size - 1; ++pass) {
        for (size_t j = 0; j < size - 1; ++j) {
            
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j+ 1]);
            }
        }
    }
}

void swap(int * index1, int *index2) {
    int hold = *index1;
    *index1 = *index2;
    *index2 = hold;
}
