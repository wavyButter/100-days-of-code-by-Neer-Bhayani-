//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() { 
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = 0;

    if (b != 0) {
        quotient = (float)a / b;
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient: Division by zero not allowed.\n");
    }

    return 0;
}
