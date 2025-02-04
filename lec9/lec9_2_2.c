#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *original = "Hello, dynamic world!";
    char *copy = strdup(original);  // original 문자열을 동적으로 복사
    if (copy == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    printf("%s\n", copy);
    for (int i = 0; i < 50; i++) {
        if (original[i] == '\0') break;
        printf("%c", original[i]);
    }
    free(copy);  // 동적으로 할당된 메모리 해제
    return 0;
}
