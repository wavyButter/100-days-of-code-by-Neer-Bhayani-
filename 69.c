#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int second_largest = -99999;
    
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    
    printf("Second largest element: %d\n", second_largest);
    
    return 0;
}
