#include <stdio.h>
#include <stdlib.h>

int main() {
    int* matrix;
    int cols = 4;

    // 메모리 할당
    matrix = malloc(cols * sizeof(int));

    // 초기화
    for (int i = 0; i < cols; i++) {
        matrix[i] = i;
    }

    // 출력
    for (int i = 0; i < cols; i++) {
        printf("%d ", matrix[i]);
    }
    printf("\n");

    // 메모리 해제
    free(matrix);

    return 0;
}
