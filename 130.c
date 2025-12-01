#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student s;
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d:\n", i + 1);
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);
    return 0;
}
