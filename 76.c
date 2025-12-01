#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    int matrix[100][100];
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int symmetric = 1;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0) break;
    }
    
    if(symmetric == 1) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }
    
    return 0;
}
