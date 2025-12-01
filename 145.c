#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    struct Student students[3] = {
        {"Alice", 101, 95.5},
        {"Bob", 102, 89.0},
        {"Charlie", 103, 97.2}
    };
    
    struct Student top = findTopStudent(students, 3);
    printf("Top Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);
    
    return 0;
}
