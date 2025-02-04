#include <stdio.h>

double get_average(double left, double right) {
    double result = (left + right);
    result /= 2;
    return result;
}

int main() {
    double avg_result = get_average(3.5, 2.2);
    printf("result: %f", avg_result);

    return 0;
}
