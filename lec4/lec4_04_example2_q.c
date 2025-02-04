#include <stdio.h>

/**
 * @brief Checks if `a` is greater than `b`.
 *
 * @param a - The first value to compare.
 * @param b - The second value to compare.
 * @return int - 1 if `a` is greater than `b`, 0 otherwise.
 */
int isGreaterThan(int a, int b);

int main() {
    int a = 3;
    int b = 5;
    int r = isGreaterThan(a, b);
    if (r) {
        printf("%d is greater than %d.\n", a, b);
    }
    else {
        printf("%d is smaller than or equal %d.\n", a, b);
    }

    return 0;
}

int isGreaterThan(int a, int b) {
    return a > b ? 1 : 0;
}