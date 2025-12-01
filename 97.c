#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    int length = strlen(name);
    if (length > 0 && name[0] != ' ') {
        printf("%c", toupper(name[0]));
    }
    for (int i = 1; i < length; i++) {
        if (name[i] == ' ' && i + 1 < length && name[i + 1] != ' ') {
            printf(" %c", toupper(name[i + 1]));
        }
    }
    printf("\n");
    return 0;
}
