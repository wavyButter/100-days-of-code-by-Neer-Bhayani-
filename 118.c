#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    int total = n * (n + 1) / 2;
    int missing = total - sum;
    
    printf("%d\n", missing);
    return 0;
}
