#include <stdio.h>

int main() {
    int i;
    // for countdown
    for (i = 11;i > 0;i--) {
        printf("for countdown-1 %02d\n", (i - 1));
    }
    printf("-----\n");
    i = 11;
    for (;i > 0;) {
        printf("for countdown-2 %02d\n", --i);
    }

    printf("-----\n");

    // while countdown
    i = 11;
    while (i > 0) {
        printf("while countdown %02d\n", --i);
    }

    printf("-----\n");

    // do-while countdown
    i = 11;
    do
    {
        printf("do-while countdown %02d\n", --i);
    } while (i > 0);

    return 0;
}
