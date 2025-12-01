#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }
        printf("%d", maxVal);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
