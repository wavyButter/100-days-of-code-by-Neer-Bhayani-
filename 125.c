#include <stdio.h>

int main() {
    char filename[100];
    char newLine[256];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // consume newline left by scanf
    
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    printf("Enter a line to append: ");
    fgets(newLine, sizeof(newLine), stdin);
    
    fprintf(file, "%s", newLine);
    fclose(file);
    
    printf("Text appended successfully\n");
    return 0;
}
