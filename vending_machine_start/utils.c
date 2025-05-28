#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// 메뉴 표시 및 사용자 선택 함수
int displayMenu() {
    // TODO: 메뉴 출력
    // "===== 자판기 메뉴 ====="
    // "1. 제품 목록 보기"
    // "2. 돈 넣기"
    // "3. 제품 구매하기"
    // "4. 잔돈 반환하기"
    // "0. 종료"
    // "선택: "
    
    return getIntInput();
}

// 숫자 입력 받는 함수 (완성된 상태로 제공)
int getIntInput() {
    int input;
    char buffer[100];
    
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (sscanf(buffer, "%d", &input) != 1) {
            // 숫자가 아닌 입력이 들어온 경우
            input = -1;
        }
    } else {
        // 입력 실패
        input = -1;
    }
    
    return input;
}

// 화면 정리 (완성된 상태로 제공)
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
} 