// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() { 
    float l;
    float b;
    float a, p;
    printf("Enter the length and breadth of the rectangle:\n");
    scanf("%f %f", &l, &b);
    a = l * b;             
    p = 2 * (l + b);      
    printf("Area of the rectangle is: %f\n", a);
    printf("Perimeter of the rectangle is: %f\n", p);
    return 0;
}
