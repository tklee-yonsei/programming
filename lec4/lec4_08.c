#include <stdio.h>

// 전역 변수 선언
int globalVar = 10;

int demoFunction(int gloVal) {
    // 지역 변수 선언
    int localVar = 5;

    printf("지역 변수: %d\n", localVar);
    // 전역 변수의 값을 수정
    // globalVar += 10;
    gloVal += 10;
    return gloVal;
}

int main() {
    printf("전역 변수 초기 값: %d\n", globalVar);

    // 함수 호출
    int b = demoFunction(globalVar);
    globalVar += b;

    printf("함수 호출 후 전역 변수 값: %d\n", globalVar);

    // 지역 변수는 이 지점에서 접근 불가
    // printf("지역 변수: %d\n", localVar); // 이 줄을 주석 해제하면 컴파일 에러 발생

    return 0;
}
