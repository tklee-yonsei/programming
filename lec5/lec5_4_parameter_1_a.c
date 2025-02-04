#include <stdio.h>

/**
 * @brief 숫자를 정수와 소수 부분으로 나누어서 할당해주는 함수
 * 
 * @param x 입력 변수
 * @param out_int_part 정수 파트
 * @param out_frac_part 소수 파트
 */
void decompose(const double x, long* out_int_part, double* out_frac_part);

int main() {
    double pi = 3.141592;
    long int_part;
    double frac_part;

    decompose(pi, &int_part, &frac_part);
    printf("pi int part: %ld\n", int_part);
    printf("pi frac part: %f\n", frac_part);
}

void decompose(const double x, long* out_int_part, double* out_frac_part) {
    *out_int_part = (long) x;
    *out_frac_part = x - *out_int_part;
}
