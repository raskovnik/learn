#include <stdio.h>
#include <string.h>

int main() {
    char x[] = "Home sweet home";
    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in srray x after memmove is: ",
    (char *)memmove(x, &x[5], 10));
}