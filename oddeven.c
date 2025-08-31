//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
    int num;
    printf("write down ur number");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d integer is even\n", num);
    }
    else 
    {
        printf("%d is odd\n", num);

    }    
    
    return 0;
}
