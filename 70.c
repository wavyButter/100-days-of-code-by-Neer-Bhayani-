#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);
    k = k % n;
    
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i = 0; i < k; i++) {
        temp = arr[n-1];
        for(j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    
    printf("Array after right rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
