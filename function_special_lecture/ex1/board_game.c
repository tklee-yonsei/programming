#include <stdio.h>

// 보드 크기를 상수로 정의
#define BOARD_SIZE 3

// 함수 선언
/**
 * 게임 보드를 초기화하는 함수
 * @param board 초기화할 게임 보드 배열
 */
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 현재 게임 보드 상태를 화면에 출력하는 함수
 * @param board 출력할 게임 보드 배열
 */
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 사용자 입력이 유효한지 확인하는 함수
 * @param board 현재 게임 보드 배열
 * @param row 사용자가 입력한 행 번호
 * @param col 사용자가 입력한 열 번호
 * @return 유효한 이동이면 1, 아니면 0을 반환
 */
int isValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col);

/**
 * 게임 보드에 플레이어의 이동을 적용하는 함수
 * @param board 업데이트할 게임 보드 배열
 * @param row 선택한 행 번호
 * @param col 선택한 열 번호
 * @param symbol 플레이어의 심볼('X' 또는 'O')
 */
void makeMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char symbol);

/**
 * 승리 조건을 확인하는 함수
 * @param board 현재 게임 보드 배열
 * @return 승리 조건 충족 시 1, 아니면 0을 반환
 */
int checkWin(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 게임 보드가 꽉 찼는지 확인하는 함수(무승부 조건)
 * @param board 현재 게임 보드 배열
 * @return 보드가 꽉 찼으면 1, 아니면 0을 반환
 */
int isBoardFull(char board[BOARD_SIZE][BOARD_SIZE]);

/**
 * 플레이어 번호에 해당하는 심볼을 반환하는 함수
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
    
    // 게임 보드 초기화
    initializeBoard(board);
    
    // 게임 시작
    printf("틱택토 게임을 시작합니다!\n");
    printf("플레이어 1: X, 플레이어 2: O\n\n");
    
    // 게임 보드 출력
    printBoard(board);
    
    // 게임 루프
    while(!gameOver) {
        // 현재 플레이어의 턴
        printf("\n플레이어 %d의 차례입니다. (%c)\n", player, getPlayerSymbol(player));
        
        // 플레이어 입력
        printf("행(0-%d)과 열(0-%d)을 입력하세요: ", BOARD_SIZE-1, BOARD_SIZE-1);
        scanf("%d %d", &row, &col);
        
        // 입력 검증
        if(!isValidMove(board, row, col)) {
            continue;
        }
        
        // 보드 업데이트
        makeMove(board, row, col, getPlayerSymbol(player));
        
        // 업데이트된 게임 보드 출력
        printBoard(board);
        
        // 승리 조건 확인
        if(checkWin(board)) {
            printf("\n플레이어 %d가 승리했습니다!\n", player);
            gameOver = 1;
        }
        // 무승부 확인
        else if(isBoardFull(board)) {
            printf("\n무승부입니다!\n");
            gameOver = 1;
        }
        // 게임이 계속되면 플레이어 전환
        else {
            player = (player == 1) ? 2 : 1;
        }
    }
    
    return 0;
}

/**
 * 게임 보드를 초기화하는 함수
 * 모든 셀을 빈 공간(' ')으로 설정합니다.
 * 
 * @param board 초기화할 게임 보드 배열
 */
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

/**
 * 현재 게임 보드 상태를 화면에 출력하는 함수
 * 행과 열 번호를 포함하여 그리드 형태로 출력합니다.
 * 
 * @param board 출력할 게임 보드 배열
 */
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    printf("\n  ");
    for(int j = 0; j < BOARD_SIZE; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for(int i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
        for(int j = 0; j < BOARD_SIZE; j++) {
            printf("%c", board[i][j]);
            if(j < BOARD_SIZE-1) printf("|");
        }
        printf("\n");
        if(i < BOARD_SIZE-1) {
            printf("  ");
            for(int j = 0; j < BOARD_SIZE-1; j++) {
                printf("-+");
            }
            printf("-\n");
        }
    }
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
    // 범위 검증
    if(row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
        printf("잘못된 입력입니다. 0에서 %d 사이의 값을 선택하세요.\n", BOARD_SIZE-1);
        return 0;
    }
    
    // 이미 선택된 위치인지 확인
    if(board[row][col] != ' ') {
        printf("이미 선택된 위치입니다. 다른 위치를 선택하세요.\n");
        return 0;
    }
    
    return 1;
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
    board[row][col] = symbol;
}

/**
 * 플레이어 번호에 해당하는 심볼을 반환하는 함수
 * 플레이어 1은 'X', 플레이어 2는 'O'를 사용합니다.
 * 
 * @param player 플레이어 번호(1 또는 2)
 * @return 플레이어의 심볼('X' 또는 'O')
 */
char getPlayerSymbol(int player) {
    return (player == 1) ? 'X' : 'O';
}

/**
 * 승리 조건을 확인하는 함수
 * 가로, 세로, 대각선으로 동일한 심볼이 BOARD_SIZE개 연속으로 있는지 확인합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @return 승리 조건 충족 시 1, 아니면 0을 반환
 */
int checkWin(char board[BOARD_SIZE][BOARD_SIZE]) {
    // 가로 확인
    for(int i = 0; i < BOARD_SIZE; i++) {
        if(board[i][0] != ' ') {
            int win = 1;
            for(int j = 1; j < BOARD_SIZE; j++) {
                if(board[i][j] != board[i][0]) {
                    win = 0;
                    break;
                }
            }
            if(win) return 1;
        }
    }
    
    // 세로 확인
    for(int j = 0; j < BOARD_SIZE; j++) {
        if(board[0][j] != ' ') {
            int win = 1;
            for(int i = 1; i < BOARD_SIZE; i++) {
                if(board[i][j] != board[0][j]) {
                    win = 0;
                    break;
                }
            }
            if(win) return 1;
        }
    }
    
    // 대각선 확인 (왼쪽 위 -> 오른쪽 아래)
    if(board[0][0] != ' ') {
        int win = 1;
        for(int i = 1; i < BOARD_SIZE; i++) {
            if(board[i][i] != board[0][0]) {
                win = 0;
                break;
            }
        }
        if(win) return 1;
    }
    
    // 대각선 확인 (오른쪽 위 -> 왼쪽 아래)
    if(board[0][BOARD_SIZE-1] != ' ') {
        int win = 1;
        for(int i = 1; i < BOARD_SIZE; i++) {
            if(board[i][BOARD_SIZE-1-i] != board[0][BOARD_SIZE-1]) {
                win = 0;
                break;
            }
        }
        if(win) return 1;
    }
    
    return 0;
}

/**
 * 게임 보드가 꽉 찼는지 확인하는 함수(무승부 조건)
 * 모든 셀이 채워져 있는지 확인합니다.
 * 
 * @param board 현재 게임 보드 배열
 * @return 보드가 꽉 찼으면 1, 아니면 0을 반환
 */
int isBoardFull(char board[BOARD_SIZE][BOARD_SIZE]) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if(board[i][j] == ' ') {
                return 0; // 빈 칸이 있으면 아직 꽉 차지 않음
            }
        }
    }
    return 1; // 모든 칸이 채워짐
}