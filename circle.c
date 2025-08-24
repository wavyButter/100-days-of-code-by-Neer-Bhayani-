//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    int r;
    float a;

    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);

    
    a = 3.14159 * r * r;

    printf("Area of the circle: %f\n", a);

    return 0;
}
