#include <stdio.h>

int main() {
    char *p;
    p = "abc";

    printf("%s\n", p);

    char ch;
    ch = p[1];
    printf("%c\n", ch);

    return 0;
}
