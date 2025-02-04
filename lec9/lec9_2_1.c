#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = malloc(50 * sizeof(char));  // 50자 문자열을 위한 공간 할당
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    strcpy(str, "Hello, world!");  // 할당된 메모리에 문자열 복사
    // str = "Hello, world!";
    printf("%s\n", str);

    // print with str pointer using for loop
    for (int i = 0; i < 50; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    printf("------\n");
    for (int i = 0; i < 50; i++) {
        if (str[i] == '\0') break;
        printf("%c", str[i]);
    }
    printf("\n");
    printf("------\n");

    free(str);  // 할당된 메모리 해제
    return 0;
}
