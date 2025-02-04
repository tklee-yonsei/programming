#include <stdio.h>

int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 5; j++) {
            if (j == 3) {
                continue;
            }
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}
