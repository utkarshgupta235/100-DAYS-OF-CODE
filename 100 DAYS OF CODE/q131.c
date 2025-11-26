#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d\n", d);
    }
    return 0;
}