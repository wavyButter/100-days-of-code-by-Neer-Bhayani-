#include <stdio.h>

int pivotIndex(int nums[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }
    
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int result = pivotIndex(nums, n);
    printf("%d\n", result);
    return 0;
}
