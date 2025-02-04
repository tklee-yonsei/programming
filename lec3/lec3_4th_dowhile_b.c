#include <stdio.h>

int main() {
    int digits = 0;
    int n;

    printf("positive integer: ");
    scanf("%d", &n);
    
    n /= 10;
    ++digits;
    while (n > 0) {
        n /= 10;
        ++digits;
    }

    printf("digits is %d.\n", digits);

    return 0;
}
