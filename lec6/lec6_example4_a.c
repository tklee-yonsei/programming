#include <stdio.h>
#include <string.h>

/**
 * @brief 문자열을 역순으로 뒤집는 함수
 * 
 * 문자열의 길이는 다음과 같이 알아낼 수 있습니다.
 * 이를 통해, 맨 끝 문자열의 주소를 계산할 수 있겠죠.
 * 
 * ```c
 * int length = strlen(str);
 * ```
 * 
 * @param str 역순으로 변경할 문자열
 */
void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    // 시작 포인터가 끝 포인터보다 작을 때까지 반복
    while (start < end) {
        // 두 포인터가 가리키는 값을 교환
        temp = *start;
        *start = *end;
        *end = temp;

        // 시작 포인터는 앞으로, 끝 포인터는 뒤로 이동
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);  // stdin에서 문자열을 읽음
    str[strcspn(str, "\n")] = 0;     // fgets는 개행 문자도 저장하므로 제거

    reverseString(str);  // 문자열을 역순으로 뒤집는 함수 호출

    printf("역순으로 출력된 문자열: %s\n", str);

    return 0;
}
