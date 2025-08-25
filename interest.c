// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    int p, r, t;
    float si, ci;

    
    printf("Enter p, r, t:\n");
    scanf("%d %d %d", &p, &r, &t);

    
    si = (p * r * t) / 100.0;

    
    ci = p * pow((1 + r / 100.0), t) - p;

    
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
