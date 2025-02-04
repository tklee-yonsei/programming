#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define IS_EVEN(n) ((n) % 2 == 0)

int max_func(int x, int y) {
    return x > y ? x : y;
}

int main(void) {
    int a = MAX(4, 3);
    printf("%d\n", a);
    double b = MAX(4.3, 3.5);
    printf("%f\n", b);

    int c = max_func(4, 3);
    printf("%d\n", c);
    double d = max_func(4.3, 3.5);
    printf("%f\n", d);

    return 0;
}
