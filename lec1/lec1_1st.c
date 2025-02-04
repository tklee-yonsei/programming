#include <stdio.h>

int main()
{
    int a = 3;
    printf("a %%d: %d\n", a);
    printf("a %%i: %i\n", a);
    printf("a %%c: %c\n", a);
    printf("a %%f: %f\n", a);
    printf("-----\n");

    int b = -3;
    printf("b %%d: %d\n", b);
    printf("b %%i: %i\n", b);
    printf("b %%c: %c\n", b);
    printf("b %%f: %f\n", b);
    printf("b %%u: %u\n", b);
    printf("-----\n");

    int c = 128;
    printf("c %%d: %d\n", c);
    printf("c %%i: %i\n", c);
    printf("c %%c: %c\n", c);
    printf("c %%f: %f\n", c);
    printf("c %%e: %e\n", c);
    printf("-----\n");

    int d = 127;
    printf("d %%d: %d\n", d);
    printf("d %%i: %i\n", d);
    printf("d %%c: %c\n", d);
    printf("d %%f: %f\n", d);
    printf("-----\n");

    unsigned char ch = 254;
    printf("ch %%d: %d\n", ch);
    printf("ch %%i: %i\n", ch);
    printf("ch %%c: %c\n", ch);
    printf("ch %%f: %f\n", ch);
    printf("-----\n");

    char strc[5] = "abcd";
    printf("strc %%c: %c\n", strc);
    printf("strc %%d: %d\n", strc);
    printf("strc %%s: %s\n", strc);
    printf("-----\n");

    char strc1[5] = "ab";
    printf("strc1 %%c: %c\n", strc1);
    printf("strc1 %%d: %d\n", strc1);
    printf("strc1 %%s: %s\n", strc1);
    printf("-----\n");

    char strc2[5] = "abcde";
    printf("strc2 %%c: %c\n", strc2);
    printf("strc2 %%d: %d\n", strc2);
    printf("strc2 %%s: %s\n", strc2);
    printf("-----\n");

    char strc3[5] = "abcdefgef";
    printf("strc3 %%c: %c\n", strc3);
    printf("strc3 %%d: %d\n", strc3);
    printf("strc3 %%s: %s\n", strc3);
    printf("-----\n");

    return 0;
}
