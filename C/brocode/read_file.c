#include <stdio.h>

int main() {
    FILE *pF = fopen("text.txt", "r");
    char buffer[255];

    if (pF == NULL) {
        printf("Unable to open file");
    }
    fgets(buffer, 255, pF);
    printf("%s\n", buffer);
    fclose(pF);
} 