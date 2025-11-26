#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    const char* roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    // Loop through all enum values
    for (int r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}