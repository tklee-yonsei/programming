#include <stdio.h>

int main()
{
    int a = 2;
    printf("+a: %d\n", +a);
    printf("-a: %d\n", -a);

    int b = 3;
    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);
    printf("a / b: %d\n", a / b);

    float c = 2.1;
    float d = 10.0;
    int e = 10;
    printf("c / d: %f\n", c / d);
    printf("a / d: %f\n", a / d);
    printf("c / e: %f\n", c / e);
    printf("a / e: %f\n", a / e);

    return 0;
}