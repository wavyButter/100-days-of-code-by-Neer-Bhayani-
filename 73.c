#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int matrix[100][100];
    int row_sum[100];
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for(j = 0; j < cols; j++) {
            row_sum[i] += matrix[i][j];
        }
    }
    
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i+1, row_sum[i]);
    }
    
    return 0;
}
