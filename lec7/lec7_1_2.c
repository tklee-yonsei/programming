#include <stdio.h>

int main() {
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *p = &a[2];
    int *q = p + 3;
    printf("%d\n", *q);
    p += 6;
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);

    int *r = p - 2;
    printf("*r: %d\n", *r);

    printf("p: %p\n", p);
    printf("q: %p\n", q);
    printf("p - q: %d\n", p - q);
    printf("q - r: %ld\n", q - r);

    printf("p <= q: %d\n", p <= q);
    printf("p >= q: %d\n", p >= q);

    return 0;
}