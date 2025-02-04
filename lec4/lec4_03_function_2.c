#include <stdio.h>

double get_average(double left, double right);

int main() {
    int x = 3;
    double cc = 1.5;
    double avg_result = get_average(x, cc);
    printf("result: %f", avg_result);

    return 0;
}

double get_average(double left, double right) {
    double result = (left + right);
    result /= 2;
    return result;
}