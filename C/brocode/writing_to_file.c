#include <stdio.h>

int main() {
    FILE *pF = fopen("text.txt", "w");
    fprintf(pF, "Spongebob Squarepants");
    fclose(pF);
}