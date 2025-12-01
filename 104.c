#include <stdio.h>

int findPivot(int n) {
    int totalSum = n * (n + 1) / 2;
    int leftSum = 0;
    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - (leftSum - x);
        if (leftSum == rightSum) {
            return x;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int pivot = findPivot(n);
    printf("%d\n", pivot);
    return 0;
}
