#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;
    char repeating = '\0';
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                repeating = str[i];
                break;
            }
        }
        i++;
    }
    
    if(repeating != '\0') {
        printf("First repeating lowercase alphabet: %c\n", repeating);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }
    
    return 0;
}
