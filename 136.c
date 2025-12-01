#include <stdio.h>

enum Menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Choose operation (0=ADD, 1=SUBTRACT, 2=MULTIPLY): ");
    enum Menu choice;
    scanf("%d", (int*)&choice);
    
    switch (choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
