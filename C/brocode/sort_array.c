#include <stdio.h>

void swap(int array[], int ind1, int ind2) {
    int temp = array[ind1];
    array[ind1] = array[ind2];
    array[ind2] = temp;
}

void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array, j, j+1);
            }
        }
    }
}

void printarray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array[] = {4, 6, 7, 3, 8, 9, 4, 7, 2, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printarray(array, size);
}