#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    
    if(found == 1) {
        printf("Element %d found at index %d\n", key, i);
    } else {
        printf("Element %d not found\n", key);
    }
    
    return 0;
}
