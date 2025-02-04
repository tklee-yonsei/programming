#include <stdio.h>

int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int div(int x, int y) { return y != 0 ? x / y : 0; }

int main() {
    int (*operations[4])(int, int) = {add, sub, mul, div};
    int a = 10, b = 5;

    for (int i = 0; i < 4; i++) {
        printf("Result: %d\n", operations[i](a, b));
    }

    return 0;
}
