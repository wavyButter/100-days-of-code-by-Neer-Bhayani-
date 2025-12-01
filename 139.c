#include <stdio.h>

int main() {
    enum UserRole {ADMIN = 100, USER = 200, GUEST = 300};
    
    printf("ADMIN stores integer: %d (size: %lu bytes)\n", ADMIN, sizeof(ADMIN));
    printf("USER stores integer: %d (size: %lu bytes)\n", USER, sizeof(USER));
    printf("GUEST stores integer: %d (size: %lu bytes)\n", GUEST, sizeof(GUEST));
    
    enum UserRole role = ADMIN;
    printf("Variable 'role' holds: %d\n", role);
    
    return 0;
}
