#include <stdio.h>

int a[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

void print_array() {
    // for (int i = 0;i < 10;i++) {
    //     printf("a[%d]: %d\n", i, a[i]);
    // }
    for (int *p = a; p < a + 10; ++p) {
        printf("a[%d]: %d\n", (int) (p - a), *p);
    }
}

int main() {
    *a = 31;
    *(a + 1) = 37;

    print_array();

    return 0;
}