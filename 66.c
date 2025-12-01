#include <stdio.h>

int main() {
    int n, i, key, pos, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter %d elements in sorted order: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    pos = n;
    while(pos > 0 && arr[pos - 1] > key) {
        arr[pos] = arr[pos - 1];
        pos--;
    }
    
    arr[pos] = key;
    n++;
    
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
