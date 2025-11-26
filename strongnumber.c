//Write a program to check if a number is a strong number..
#include <stdio.h>

int main() {
    int num, originalNum, remainder, factorial, sum = 0;
    printf("enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;


        }
        sum += factorial;    originalNum /=10;



    }
    if (sum == num)
        printf("%d is a strong number.\n", num);
        else
        printf(" %d is not a strong number.\n", num);
        






      


    return 0;
}
