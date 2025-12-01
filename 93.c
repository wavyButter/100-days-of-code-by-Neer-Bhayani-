#include <stdio.h>
#include <string.h>

int areAnagrams(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int count1[256] = {0}, count2[256] = {0};
    for (int i = 0; s1[i]; i++) count1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i]; i++) count2[(unsigned char)s2[i]]++;
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) return 0;
    }
    return 1;
}
