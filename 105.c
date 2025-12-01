#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = nums[0];
    int count = 1;
    
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    int validCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            validCount++;
        }
    }
    
    if (validCount > n / 2) {
        return candidate;
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
    
    int result = majorityElement(nums, n);
    printf("%d\n", result);
    return 0;
}
