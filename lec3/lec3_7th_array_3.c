#include <stdio.h>

#define N 10

int main() {
    int a[N];

    for (int i = 0;i < N;i++) {
        a[i] = i + 1;
    }
    // int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    a[1] = 5;
    for (int i = 0;i < N;i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
