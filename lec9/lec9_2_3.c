#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 3;  // 문자열 개수
    char* *strings = malloc(n * sizeof(char*));  // 포인터 배열을 위한 메모리 할당
    if (strings == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    strings[0] = strdup("Apple");
    strings[1] = strdup("Banana");
    strings[2] = strdup("Cherry");

    for (int i = 0; i < n; i++) {
        if (strings[i] == NULL) {
            printf("Memory allocation for strings[%d] failed\n", i);
            // 할당 실패 시, 이전에 할당된 메모리 해제
            for (int j = 0; j < i; j++) {
                free(strings[j]);
            }
            free(strings);
            return -1;
        }
        printf("%s\n", strings[i]);
        free(strings[i]);  // 각 문자열 메모리 해제
    }
    free(strings);  // 문자열 포인터 배열 메모리 해제
    return 0;
}
