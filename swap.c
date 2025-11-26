//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first_digit, last_digit, middle_part, digits = 0, temp, swapped_num, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last_digit = temp % 10;

    
    while (temp != 0) {
        first_digit = temp % 10;
        temp = temp / 10;
        digits++;
    }

    
    power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    
    middle_part = (num % power) / 10;

    
    swapped_num = last_digit * power + middle_part * 10 + first_digit;

    printf("Number after swapping first and last digit: %d\n", swapped_num);

    return 0;
}
