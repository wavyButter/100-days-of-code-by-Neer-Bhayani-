#include <stdio.h>

int main() {
    enum UserRole {ADMIN, USER, GUEST};
    char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    int size = sizeof(roleNames) / sizeof(roleNames[0]);

    for (int i = 0; i < size; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }
    return 0;
}
