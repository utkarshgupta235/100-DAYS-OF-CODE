#include <stdio.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice = MULTIPLY;   // Change to ADD or SUBTRACT to test

    int a = 8, b = 4;

    switch (choice) {
        case ADD:
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;

        case SUBTRACT:
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;

        case MULTIPLY:
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;

        default:
            printf("Invalid menu choice.\n");
            break;
    }

    return 0;
}