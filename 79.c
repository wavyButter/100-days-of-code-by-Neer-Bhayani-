#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int matrix[100][100];
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Diagonal traversal:\n");
    
    for(int k = 0; k < rows + cols - 1; k++) {
        for(i = 0; i < rows; i++) {
            j = k - i;
            if(j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
