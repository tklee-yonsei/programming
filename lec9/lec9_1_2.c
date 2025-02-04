#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);  // 할당 실패 시 프로그램 종료
    }

    *ptr = 10;  // 메모리 할당 성공 시 사용
    printf("Value: %d\n", *ptr);

    free(ptr);
    return 0;
}
