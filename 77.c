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
    
    int diagonal[100];
    for(i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }
    
    int distinct = 1;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0) break;
    }
    
    if(distinct == 1) {
        printf("Diagonal elements are distinct\n");
    } else {
        printf("Diagonal elements are not distinct\n");
    }
    
    return 0;
}
