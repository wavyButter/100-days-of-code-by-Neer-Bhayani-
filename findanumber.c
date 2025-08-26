// write a c program(wap) to enter numbers till the user wants at the end print the cunts of negative number positive and zeros
#include <stdio.h>

int main() {
    int num;
    int countPositive = 0, countNegative = 0, countZero = 0;
    char choice;

    do {
        
        printf("Enter a number: ");
        scanf("%d", &num);

        
        if (num > 0)
            countPositive++;
        else if (num < 0)
            countNegative++;
        else
            countZero++;

        
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  

    } while (choice == 'y' || choice == 'Y');

    
    printf("\nCount of Positive numbers: %d\n", countPositive);
    printf("Count of Negative numbers: %d\n", countNegative);
    printf("Count of Zeros: %d\n", countZero);

    return 0;
}
