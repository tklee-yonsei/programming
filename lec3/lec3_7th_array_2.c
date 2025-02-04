#include <stdio.h>

#define N 3

int main() {
    int a[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; ++i) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
