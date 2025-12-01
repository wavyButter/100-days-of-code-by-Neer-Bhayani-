#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int xorSum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xorSum ^= arr[i];
    }
    
    for (int i = 1; i < n; i++) {
        xorSum ^= i;
    }
    
    printf("%d\n", xorSum);
    return 0;
}
