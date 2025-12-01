#include <stdio.h>

int main() {
    int num, temp, digit;
    int count[10] = {0};
    int max_count = 0, max_digit = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    temp = num >= 0 ? num : -num;
    
    while(temp > 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }
    
    for(digit = 0; digit < 10; digit++) {
        if(count[digit] > max_count) {
            max_count = count[digit];
            max_digit = digit;
        }
    }
    
    printf("Digit %d occurs most times (%d times)\n", max_digit, max_count);
    
    return 0;
}
