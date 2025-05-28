#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// 메뉴 표시 및 사용자 선택 함수
int displayMenu() {
    printf("\n===== 자판기 메뉴 =====\n");
    printf("1. 제품 목록 보기\n");
    printf("2. 돈 넣기\n");
    printf("3. 제품 구매하기\n");
    printf("4. 잔돈 반환하기\n");
    printf("0. 종료\n");
    printf("선택: ");
    
    return getIntInput();
}

// 숫자 입력 받는 함수
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

// 화면 정리 (시스템 명령어 호출)
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
} 