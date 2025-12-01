#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int left[100] = {1};
    int right[100] = {1};
    
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }
    
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d", left[i] * right[i]);
        if (i < n - 1) printf(",");
    }
    printf("\n");
    return 0;
}
