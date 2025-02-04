#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main(void) {
    int a = 3;
    int b = 4;
    // int c = MAX(++a, ++b);
    // int c = (++a) > (++b) ? (++a) : (++b);
    int c = (a) > (b) ? (++a) : (++b);
    printf("%d\n", c);
    
    return 0;
}
