#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("enter a number :");
    scanf("%d", &n);  

    if (n < 0)
        printf("error");
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
