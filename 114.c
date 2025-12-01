#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0;
    int len = 0;
    int lastSeen[256] = {-1};
    
    for (int i = 0; i < n; i++) {
        if (lastSeen[(unsigned char)s[i]] >= len) {
            len = lastSeen[(unsigned char)s[i]] + 1;
        }
        lastSeen[(unsigned char)s[i]] = i;
        if (i - len + 1 > maxLen) {
            maxLen = i - len + 1;
        }
    }
    
    printf("%d\n", maxLen);
    return 0;
}
