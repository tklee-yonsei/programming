#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    // malloc 사용
    array = (int*)malloc(5 * sizeof(int));  // 5개의 정수를 위한 공간 할당
    if (array != NULL) {
        // *(array + sizeof(int) * 0) = 0 * 0;
        // *(array + sizeof(int) * 1) = 1 * 1;
        // *(array + sizeof(int) * 2) = 2 * 2;

        array[0] = 0 * 0;  // 할당된 공간 초기화
        array[1] = 1 * 1;  // 할당된 공간 초기화
        array[2] = 2 * 2;  // 할당된 공간 초기화
        array[3] = 3 * 3;  // 할당된 공간 초기화
        array[4] = 4 * 4;  // 할당된 공간 초기화

        // for (int i = 0; i < 5; i++) {
        //     printf("address array[%d]: %p\n", i, &array[i]);
        //     array[i] = i * i;  // 할당된 공간 초기화
        //     printf("array[%d]: %d\n", i, array[i]);
        // }
    }

    array[5] = 3;
    array[6] = 20;
    for (int i = 0; i < 7; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }    

    // realloc 사용 (크기 조정)
    array = realloc(array, 10 * sizeof(int));  // 공간을 10개의 정수 크기로 확장
    if (array != NULL) {
        for (int i = 5; i < 10; i++) {
            array[i] = i * i;
        }
    }

    for (int i = 0; i < 11; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    } 

    // calloc 사용
    int *another_array = (int*)calloc(5, sizeof(int));  // 5개의 정수 공간을 할당하고 0으로 초기화

    for (int i = 0; i < 7; i++) {
        printf("another_array[%d]: %d\n", i, another_array[i]);
    }

    // 메모리 해제
    free(array);
    for (int i = 0; i < 11; i++) {
        printf("af array[%d]: %d\n", i, array[i]);
    }
    free(another_array);
    for (int i = 0; i < 7; i++) {
        printf("af another_array[%d]: %d\n", i, another_array[i]);
    }
    return 0;
}
