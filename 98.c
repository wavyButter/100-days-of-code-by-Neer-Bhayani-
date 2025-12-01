#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    
    int length = strlen(name);
    int firstWord = 1;
    char *lastWordStart = NULL;
    char *temp = name;
    
    while (*temp) {
        if (*temp == ' ') {
            firstWord = 0;
        }
        temp++;
    }
    
    temp = name;
    while (*temp) {
        if (firstWord && isalpha(*temp)) {
            printf("%c.", toupper(*temp));
            firstWord = 0;
        } else if (*temp == ' ') {
            if (temp + 1 < name + length && isalpha(*(temp + 1))) {
                printf("%c.", toupper(*(temp + 1)));
            }
            lastWordStart = temp + 1;
        }
        temp++;
    }
    
    if (lastWordStart) {
        printf(" %s", lastWordStart);
    }
    printf("\n");
    return 0;
}
