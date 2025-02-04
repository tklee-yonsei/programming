#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 성공 case 1
    char str1[10] = "abcd";
    printf("str1: %s\n", str1);
    strcat(str1, "efefe");
    printf("str1: %s\n", str1);

    // 에러 발생 case 1
    // char str2[] = "abcd";
    // strcat(str2, "efef");

    // 성공 case 2
    char* str3 = malloc(10);  // 메모리 할당
    strcpy(str3, "abcd");     // 문자열 복사
    printf("str3: %s\n", str3);
    strcat(str3, "efeferef");     // 문자열 연결
    printf("str3: %s\n", str3);
    free(str3);               // 메모리 해제

    // 에러 발생 case 2
    // char* str4 = "abcd";
    // strcat(str4, "efef");

    return 0;
}
