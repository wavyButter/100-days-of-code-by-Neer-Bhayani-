#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w");
    char name[100];
    int age;
    
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    
    printf("Data successfully saved to info.txt\n");
    return 0;
}
