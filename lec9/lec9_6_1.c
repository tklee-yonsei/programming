#include <stdio.h>

void greet(void (*func)()) {
    func();  // 전달받은 함수 포인터를 호출
}

void hello() {
    printf("Hello, world!\n");
}

void goodbye() {
    printf("Goodbye, world!\n");
}

int main() {
    greet(hello);  // hello 함수를 greet 함수에 인자로 전달
    greet(goodbye);  // goodbye 함수를 greet 함수에 인자로 전달
    return 0;
}
