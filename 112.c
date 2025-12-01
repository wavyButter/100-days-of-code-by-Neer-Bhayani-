#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxSoFar = arr[0];
    int maxEndingHere = 0;
    int allNegative = 1;
    int maxElement = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            allNegative = 0;
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    if (allNegative) {
        printf("%d\n", maxElement);
        return 0;
    }
    
    maxEndingHere = 0;
    maxSoFar = arr[0];
    
    for (int i = 0; i < n; i++) {
        maxEndingHere += arr[i];
        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        }
    }
    
    printf("%d\n", maxSoFar);
    return 0;
}
