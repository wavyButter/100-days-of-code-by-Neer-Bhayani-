#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    char line[256];
    
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    
    fclose(file);
    return 0;
}
