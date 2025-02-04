#include <stdio.h>

int main(void) {
    printf("컴파일 날짜: %s\n", __DATE__);
    printf("컴파일 시간: %s\n", __TIME__);
    printf("컴파일하는 파일의 줄 번호: %d\n", __LINE__);
    printf("컴파일하는 파일 이름: %s\n", __FILE__);
    
    return 0;
}
