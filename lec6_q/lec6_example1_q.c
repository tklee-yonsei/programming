#include <stdio.h>

/**
 * @brief 최대값을 찾는 함수
 * 
 * @param arr 배열
 * @param n 배열의 크기
 * @return int 최대값
 */
int findMax(int arr[], int n);

/**
 * @brief 최소값을 찾는 함수
 * 
 * @param arr 배열
 * @param n 배열의 크기
 * @return int 최소값
 */
int findMin(int arr[], int n);

/**
 * @brief 평균값을 찾는 함수
 * 
 * @param arr 배열
 * @param n 배열의 크기
 * @return double 평균값
 */
double findAverage(int arr[], int n);

int main() {
    int numbers[] = {3, 50, 7, 10, 25, 60, 2, 15};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int max = findMax(numbers, n);
    int min = findMin(numbers, n);
    double avg = findAverage(numbers, n);

    printf("max: %d\n", max);
    printf("min: %d\n", min);
    printf("avg: %.2f\n", avg);

    return 0;
}

int findMax(int arr[], int n) {
    return arr[0];
}

int findMin(int arr[], int n) {
    return arr[0];
}

double findAverage(int arr[], int n) {
    return arr[0];
}