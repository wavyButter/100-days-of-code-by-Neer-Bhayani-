#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    int vowels = 0, consonants = 0;
    char c;
    
    while ((c = fgetc(file)) != EOF) {
        c = tolower(c);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    fclose(file);
    
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
