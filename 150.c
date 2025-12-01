#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s = {"Alice", 101, 88.5};
    struct Student *ptr = &s;
    
    printf("Before modification:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);
    
    
    ptr->marks = 92.0;
    ptr->roll_no = 102;
    
    printf("After modification:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", ptr->name, ptr->roll_no, ptr->marks);
    
    return 0;
}
