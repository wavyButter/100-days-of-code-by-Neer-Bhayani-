#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) return 0;
    
    char *temp = malloc(sizeof(char) * (len1 * 2 + 1));
    temp[0] = '\0';
    strcat(temp, s1);
    strcat(temp, s1);
    
    int result = strstr(temp, s2) != NULL;
    free(temp);
    return result;
}
