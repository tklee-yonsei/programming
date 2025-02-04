#include<stdio.h>

int main() {
    int a = 1; // int
    printf("a: %d\n", a);

    a = a + 1; // 변수는 변경가능.
    printf("a: %d\n", a);

    float b = 0.2; // float
    printf("b: %f\n", b);

    double c = 0.2; // double
    printf("c: %f\n", c);

    char d = 'a'; // 문자는 ''로.
    printf("d: %c\n", d);
    printf("d: %d\n", d);

    char ds[5] = "abc"; // 문자열은 ""로. 이건 배열입니다.
    printf("ds: %s\n", ds);
    return 0;
}
