#include <stdio.h>

void main() {
    int r;
    float pi = 3.14;

    printf("Enter the radius value for the circle: ");
    scanf("%d", &r);

    float area = pi * r * r;
        float circumference = 2 * pi * r;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);


}
