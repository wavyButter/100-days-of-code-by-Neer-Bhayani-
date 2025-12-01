#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    fclose(file);
    
    if (count == 0) {
        printf("No numbers found\n");
    } else {
        double avg = (double)sum / count;
        printf("Sum: %d\nAverage: %.2f\n", sum, avg);
    }
    
    return 0;
}
