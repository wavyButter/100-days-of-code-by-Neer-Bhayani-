#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, flag = 1;
    char temp;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    
    if(flag == 1) {
        printf("String is palindrome\n");
    } else {
        printf("String is not palindrome\n");
    }
    
    return 0;
}
