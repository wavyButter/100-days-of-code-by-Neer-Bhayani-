#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *file;

    // Input employee data
    printf("Enter name: ");
    scanf("%s", emp.name);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);


    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }
    fread(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    
    printf("\nEmployee Data from file:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
