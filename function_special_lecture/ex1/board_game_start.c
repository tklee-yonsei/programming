#include <stdio.h>

// 보드 크기를 상수로 정의
#define BOARD_SIZE 3

// 함수 선언
/**
 * 게임 보드를 초기화하는 함수
 * 모든 셀을 빈 공간(' ')으로 설정합니다.
 * 
 * @param board 초기화할 게임 보드 배열
 */
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 현재 게임 보드 상태를 화면에 출력하는 함수
 * 행과 열 번호를 포함하여 그리드 형태로 출력합니다.
 * 
 * @param board 출력할 게임 보드 배열
 */
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 사용자 입력이 유효한지 확인하는 함수
 * 입력한 위치가 보드 범위 내에 있는지, 그리고 이미 선택된 위치가 아닌지 검사합니다.
 * 유효하지 않은 입력에 대해 오류 메시지를 출력합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @param row 사용자가 입력한 행 번호
 * @param col 사용자가 입력한 열 번호
 * @return 유효한 이동이면 1, 아니면 0을 반환
 */
int isValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col);

/**
 * 게임 보드에 플레이어의 이동을 적용하는 함수
 * 선택한 위치에 플레이어의 심볼을 표시합니다.
 * 
 * @param board 업데이트할 게임 보드 배열
 * @param row 선택한 행 번호
 * @param col 선택한 열 번호
 * @param symbol 플레이어의 심볼('X' 또는 'O')
 */
void makeMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char symbol);

/**
 * 승리 조건을 확인하는 함수
 * 가로, 세로, 대각선으로 동일한 심볼이 BOARD_SIZE개 연속으로 있는지 확인합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @return 승리 조건 충족 시 1, 아니면 0을 반환
 */
int checkWin(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 게임 보드가 꽉 찼는지 확인하는 함수(무승부 조건)
 * 모든 셀이 채워져 있는지 확인합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @return 보드가 꽉 찼으면 1, 아니면 0을 반환
 */
int isBoardFull(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 플레이어 번호에 해당하는 심볼을 반환하는 함수
 * 플레이어 1은 'X', 플레이어 2는 'O'를 사용합니다.
 * 
 * @param player 플레이어 번호(1 또는 2)
 * @return 플레이어의 심볼('X' 또는 'O')
 */
char getPlayerSymbol(int player);

int main() {
    // BOARD_SIZE x BOARD_SIZE 틱택토 게임 보드
    char board[BOARD_SIZE][BOARD_SIZE];
    int row, col;
    int player = 1; // 플레이어 1은 'X', 플레이어 2는 'O'
    int gameOver = 0;
    
    // 게임 보드 초기화 함수 호출
    initializeBoard(board);
    
    // 게임 시작 메시지 출력
    printf("틱택토 게임을 시작합니다!\n");
    printf("플레이어 1: X, 플레이어 2: O\n\n");
    
    // 게임 보드 출력 함수 호출
    printBoard(board);
    
    // TODO: 여기에 게임 루프를 구현하세요.
    // 힌트: while 루프를 사용하여 게임이 끝날 때까지 반복
    
    // 게임 루프는 다음과 같은 단계를 포함해야 합니다:
    // 1. 현재 플레이어 표시
    // 2. 사용자 입력 받기
    // 3. 입력 유효성 검사
    // 4. 보드 업데이트
    // 5. 보드 출력
    // 6. 승리 또는 무승부 확인
    // 7. 플레이어 전환
    
    return 0;
}

/**
 * 게임 보드를 초기화하는 함수
 * 모든 셀을 빈 공간(' ')으로 설정합니다.
 * 
 * @param board 초기화할 게임 보드 배열
 */
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    // TODO: 모든 보드 칸을 빈 공간(' ')으로 초기화하세요.
    // 힌트: 2중 for 루프를 사용하세요.
}

/**
 * 현재 게임 보드 상태를 화면에 출력하는 함수
 * 행과 열 번호를 포함하여 그리드 형태로 출력합니다.
 * 
 * @param board 출력할 게임 보드 배열
 */
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    // 열 번호 출력
    printf("\n  ");
    for(int j = 0; j < BOARD_SIZE; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    // TODO: 보드의 내용을 출력하세요.
    // 힌트: 각 행 번호, 칸의 내용, 구분선을 출력해야 합니다.
}

/**
 * 사용자 입력이 유효한지 확인하는 함수
 * 입력한 위치가 보드 범위 내에 있는지, 그리고 이미 선택된 위치가 아닌지 검사합니다.
 * 유효하지 않은 입력에 대해 오류 메시지를 출력합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @param row 사용자가 입력한 행 번호
 * @param col 사용자가 입력한 열 번호
 * @return 유효한 이동이면 1, 아니면 0을 반환
 */
int isValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
    // TODO: 입력이 유효한지 확인하는 로직을 구현하세요.
    // 1. 행과 열이 보드 범위 내에 있는지 확인
    // 2. 이미 선택된 위치가 아닌지 확인
    
    return 1; // 임시로 항상 유효하다고 반환 (구현 후 수정 필요)
}

/**
 * 게임 보드에 플레이어의 이동을 적용하는 함수
 * 선택한 위치에 플레이어의 심볼을 표시합니다.
 * 
 * @param board 업데이트할 게임 보드 배열
 * @param row 선택한 행 번호
 * @param col 선택한 열 번호
 * @param symbol 플레이어의 심볼('X' 또는 'O')
 */
void makeMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char symbol) {
    // TODO: 선택한 위치에 플레이어의 심볼 표시하기
}

/**
 * 플레이어 번호에 해당하는 심볼을 반환하는 함수
 * 플레이어 1은 'X', 플레이어 2는 'O'를 사용합니다.
 * 
 * @param player 플레이어 번호(1 또는 2)
 * @return 플레이어의 심볼('X' 또는 'O')
 */
char getPlayerSymbol(int player) {
    // TODO: 플레이어 번호(1 또는 2)에 따라 심볼('X' 또는 'O') 반환하기
    return ' '; // 임시로 빈 공간 반환 (구현 후 수정 필요)
}

/**
 * 승리 조건을 확인하는 함수
 * 가로, 세로, 대각선으로 동일한 심볼이 BOARD_SIZE개 연속으로 있는지 확인합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @return 승리 조건 충족 시 1, 아니면 0을 반환
 */
int checkWin(char board[BOARD_SIZE][BOARD_SIZE]) {
    // TODO: 승리 조건을 확인하는 로직을 구현하세요.
    // 1. 가로 방향 확인
    // 2. 세로 방향 확인
    // 3. 대각선 방향 확인 (왼쪽 위 -> 오른쪽 아래)
    // 4. 대각선 방향 확인 (오른쪽 위 -> 왼쪽 아래)
    
    return 0; // 임시로 승리하지 않았다고 반환 (구현 후 수정 필요)
}

/**
 * 게임 보드가 꽉 찼는지 확인하는 함수(무승부 조건)
 * 모든 셀이 채워져 있는지 확인합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @return 보드가 꽉 찼으면 1, 아니면 0을 반환
 */
int isBoardFull(char board[BOARD_SIZE][BOARD_SIZE]) {
    // TODO: 보드가 꽉 찼는지 확인하는 로직을 구현하세요.
    // 힌트: 빈 칸이 하나라도 있으면 꽉 차지 않은 것입니다.
    
    return 0; // 임시로 꽉 차지 않았다고 반환 (구현 후 수정 필요)
}