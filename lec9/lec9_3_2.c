#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int)); // 메모리 할당
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    *ptr = 10;  // 메모리에 값 할당
    printf("Value at ptr: %d\n", *ptr);

    free(ptr);  // 메모리 해제

    // 메모리 해제 후 포인터 사용
    printf("Value at ptr after free: %d\n", *ptr);  // 매달린 포인터 문제 발생

    *ptr = 20;  // 메모리 해제 후 포인터를 통해 메모리에 쓰기 시도
    printf("New value at ptr: %d\n", *ptr);  // 예측 불가능한 결과

    return 0;
}
