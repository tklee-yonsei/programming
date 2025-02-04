#include <stdio.h>

#define DEBUG 0

int check(int a, int c) {
    #if DEBUG
    printf("a 값: %d\n", a);
    printf("c 값: %d\n", c);
    #endif

    return a + c;
}

int main(void) {
    check(3, 4);
    
    return 0;
}
