#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    
    char c;
    while ((c = fgetc(input)) != EOF) {
        fputc(toupper(c), output);
    }
    
    fclose(input);
    fclose(output);
    printf("Conversion completed: output.txt\n");
    return 0;
}
