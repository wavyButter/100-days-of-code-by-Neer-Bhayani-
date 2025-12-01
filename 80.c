#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if(c1 != r2) {
        printf("Multiplication not possible\n");
        return 1;
    }
    
    int mat1[100][100], mat2[100][100], result[100][100];
    
    printf("Enter first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for
