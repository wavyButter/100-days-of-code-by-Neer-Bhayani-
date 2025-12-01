#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxSum = 0;
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (i == 0 || currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("%d\n", maxSum);
    return 0;
}
