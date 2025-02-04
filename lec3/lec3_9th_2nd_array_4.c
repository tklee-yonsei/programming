#include <stdio.h>

#define N 5
#define M 9

int main() {
    int arr[N][M] = {
        1, 1, 1, 1, 1, 0, 1, 1, 0,
        0, 1, 0, 1, 0, 1, 0, 1, 0,
        0, 1, 0, 1, 1, 0, 0, 1, 0,
    };

    printf("arr[0][0]: %d\n", arr[0][0]);
    printf("arr[0][1]: %d\n", arr[0][1]);
    printf("arr[0][8]: %d\n", arr[0][8]);
    printf("arr[1][0]: %d\n", arr[1][0]);
    printf("arr[3][0]: %d\n", arr[1][0]);

    return 0;
}
