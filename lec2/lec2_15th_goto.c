#include <stdio.h>

int main() {
    int d;
    int n = 10;

    for (d = 2; d < n; ++d) {
        if (n % d == 0) {
            goto done;
        }
    }

    return 0;

done:
    if (d < n) {
        printf("%d is divisible by %d\n", n, d);
    } else {
        printf("%d is a prime\n", n);
    }
}
