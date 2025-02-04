#include <stdio.h>

int main() {
    // 정수 여러 개의 합을 구하기.
    // for나 while을 사용합니다.
    // 0을 입력할 시, 수열이 종료됩니다.
    int n;
    int sum = 0;

    printf("input number: ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        printf("input number: ");
        scanf("%d", &n);
    }
    printf("sum: %d\n", sum);

    return 0;
}
