#include <stdio.h>

int main()
{
    int a = 3;

    a &= 5;
    printf("a: %d\n", a);
    a |= 5;
    printf("a: %d\n", a);
    a ^= 2;
    printf("a: %d\n", a);
    a <<= 2;
    printf("a: %d\n", a);
    a >>= 3;
    printf("a: %d\n", a);
    
    return 0;
}