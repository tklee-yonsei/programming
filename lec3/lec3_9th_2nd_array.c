#include <stdio.h>

#define N 5
#define M 9

int main() {
    int arr[N][M];

    for (int row = 0; row < N; ++row) {
        for (int col = 0; col < M; ++col) {
            arr[row][col] = row * M + col;
        }
    }

    printf("arr[0][0]: %d\n", arr[0][0]);
    printf("arr[0][1]: %d\n", arr[0][1]);
    printf("arr[0][8]: %d\n", arr[0][8]);
    printf("arr[1][0]: %d\n", arr[1][0]);

    printf("&arr[0][8]: %d\n", &arr[0][8]);
    printf("&arr[1][0]: %d\n", &arr[1][0]);

    return 0;
}