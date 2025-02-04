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

// 키 입력 감지 함수 (Linux/Unix)
int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

// 일정 시간 대기 함수 (milliseconds)
void delay(int milliseconds) {
    usleep(milliseconds * 1000);
}

int main() {
    char name[50];
    int colors[] = {31, 32, 33, 34, 35, 36}; // ANSI 색상 코드 (빨강, 초록, 노랑, 파랑, 자홍, 청록)
    int colorCount = sizeof(colors) / sizeof(colors[0]);
    int i = 0;

    printf("name: ");
    fflush(stdout); // 터미널에 즉시 출력하도록 강제

    while (!kbhit()) {
        setColor(colors[i % colorCount]);
        delay(200); // 200 밀리초 대기

        printf("\rname: "); // 줄의 처음으로 돌아가서 덮어씀
        fflush(stdout);

        i++;
    }

    setColor(0); // 색상을 기본값으로 되돌림
    scanf("%49s", name);

    setColor(0); // 색상을 기본값으로 되돌림
    printf("\n입력된 이름: %s\n", name);

    return 0;
}
