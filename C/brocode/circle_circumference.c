#include <stdio.h>

int main() {
    const double PI = 3.14;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of the circle: \n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("The circumference of the circle is %.2lf \n", circumference);
    printf("The area of the circle is %.2lf \n", area);

}