#include <stdio.h>

#define DEBUG 2

int check(int a, int c) {
    #if DEBUG == 0
    printf("a 값: %d\n", a);
    #elif DEBUG == 1
    printf("c 값: %d\n", c);
    #else
    printf("Nothing");
    #endif

    return a + c;
}

int main(void) {
    check(3, 4);
    
    return 0;
}
