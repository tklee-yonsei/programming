#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

// ANSI 색상 코드 설정 함수
void setColor(int color) {
    printf("\033[0;%dm", color);
}

// 일정 시간 대기 함수 (milliseconds)
void delay(int milliseconds) {
    usleep(milliseconds * 1000);
}

int main() {
    char name[50];
    int colors[] = {31, 32, 33, 34, 35, 36}; // ANSI 색상 코드 (빨강, 초록, 노랑, 파랑, 자홍, 청록)
    int colorCount = sizeof(colors) / sizeof(colors[0]);
    int i = 0, pos = 0;
    char ch;

    printf("name: ");
    fflush(stdout); // 터미널에 즉시 출력하도록 강제

    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt); // 현재 터미널 속성 저장
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); // 캐논 모드와 에코를 비활성화
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // 변경된 속성 적용

    while (1) {
        // 색상 변경
        setColor(colors[i % colorCount]);
        delay(200); // 200 밀리초 대기

        // 입력된 문자 출력
        printf("\rname: %s", name);
        fflush(stdout);

        // 키 입력 확인
        if (read(STDIN_FILENO, &ch, 1) > 0) {
            if (ch == '\n') {
                name[pos] = '\0'; // 문자열 끝에 null 문자 추가
                break; // 엔터 입력 시 종료
            } else if (ch == 127) { // 백스페이스 처리 (127은 ASCII 백스페이스)
                if (pos > 0) {
                    pos--;
                    name[pos] = '\0';
                }
            } else if (pos < sizeof(name) - 1) {
                name[pos] = ch;
                pos++;
                name[pos] = '\0';
            }
        }

        i++;
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // 원래 터미널 속성 복원
    setColor(0); // 색상을 기본값으로 되돌림
    printf("\n입력된 이름: %s\n", name);

    return 0;
}
