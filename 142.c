#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
    
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name=%s, Roll No=%d, Marks=%.2f\n", 
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }
    
    return 0;
}
