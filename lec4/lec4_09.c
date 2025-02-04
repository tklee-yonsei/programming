#include <stdio.h>

// 전역 변수 선언
int counter = 0;

void incrementCounter() {
    counter += 1; // 전역 변수 값을 증가
    printf("incrementCounter에서의 counter 값: %d\n", counter);
}

void doubleCounter() {
    counter *= 2; // 전역 변수 값을 두 배 증가
    printf("doubleCounter에서의 counter 값: %d\n", counter);
}

int main() {
    printf("main에서의 초기 counter 값: %d\n", counter);

    incrementCounter(); // counter 값을 1 증가
    doubleCounter(); // 현재 counter 값을 두 배 증가

    // 예상치 못한 변경으로 인해 프로그램의 흐름을 예측하기 어렵게 됨
    printf("최종 counter 값: %d\n", counter);

    return 0;
}