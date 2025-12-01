#include <stdio.h>

int main() {
    char source[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);
    
    FILE *src = fopen(source, "r");
    FILE *dst = fopen(dest, "w");
    
    if (src == NULL || dst == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    
    char c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dst);
    }
    
    fclose(src);
    fclose(dst);
    printf("File copied successfully\n");
    return 0;
}
