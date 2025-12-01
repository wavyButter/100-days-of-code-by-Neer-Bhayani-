#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[100][100];
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("Sum of main diagonal elements: %d\n", sum);
    
    return 0;
}
