#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    
    int i = 0;
    int capitalizeNext = 1;
    
    while (s[i]) {
        if (capitalizeNext && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            capitalizeNext = 0;
        } else {
            s[i] = tolower(s[i]);
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
            capitalizeNext = 1;
        }
        i++;
    }
    
    printf("%s", s);
    return 0;
}
