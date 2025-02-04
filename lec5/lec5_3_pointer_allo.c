#include <stdio.h>

int main() {
    int abc = 1;

    int other = abc;
    printf("abc: %d\n", abc);
    printf("other: %d\n", other);
    abc++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", other);
    other += 2;
    printf("abc: %d\n", abc);
    printf("other: %d\n", other);
}