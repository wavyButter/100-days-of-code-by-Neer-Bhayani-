#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened\n");
        return 1;
    }
    
    char c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
    
    fclose(file);
    return 0;
}
