#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        i++;
        printf("i-1: %d\n", i);
        printf("i1: %p\n ", &i);
        int i = 5;
        i--;
        printf("i2: %p\n ", &i);
        printf("i-2: %d\n", i);
        i++;
        printf("i-3: %d\n", i);
    }
}
