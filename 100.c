#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abc";
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(s[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
