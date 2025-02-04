#include <stdio.h>

#define MAX_SIZE 10

/**
 * @brief 행렬 요소를 입력받는 함수
 *
 * @param matrix 입력받을 행렬
 * @param rows 행 수
 * @param cols 열 수
 */
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);

/**
 * @brief 행렬을 출력하는 함수
 *
 * @param matrix 출력할 행렬
 * @param rows 행 수
 * @param cols 열 수
 */
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);

/**
 * @brief 행렬의 덧셈
 *
 * @param A 행렬 A
 * @param B 행렬 B
 * @param result 행렬 A + B의 결과로 들어갈 행렬
 * @param rows 행 수
 * @param cols 열 수
 */
void addMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols);

/**
 * @brief 행렬의 곱셈
 *
 * @param A 행렬 A
 * @param B 행렬 B
 * @param result 행렬 A * B의 결과로 들어갈 행렬
 * @param r1 행렬 A의 행 수
 * @param c1 행렬 A의 열 수
 * @param r2 행렬 B의 행 수
 * @param c2 행렬 B의 열 수
 */
void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int r1, int c1, int r2, int c2);

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int r1, c1, r2, c2;

    printf("첫 번째 행렬의 행과 열 수 입력: ");
    scanf("%d %d", &r1, &c1);
    inputMatrix(A, r1, c1);

    printf("두 번째 행렬의 행과 열 수 입력: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("행렬 곱셈을 위해 첫 번째 행렬의 열 수와 두 번째 행렬의 행 수가 같아야 합니다.\n");
        return 1;
    }
    inputMatrix(B, r2, c2);

    // 행렬 덧셈
    printf("행렬 덧셈 결과:\n");
    addMatrices(A, B, result, r1, c1);
    printMatrix(result, r1, c1);

    // 행렬 곱셈
    printf("행렬 곱셈 결과:\n");
    multiplyMatrices(A, B, result, r1, c1, r2, c2);
    printMatrix(result, r1, c2);

    return 0;
}

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("행렬 요소 입력:");
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int r1, int c1, int r2, int c2) {
    for (int i = 0;i < r1;i++) {
        for (int j = 0;j < c2;j++) {
            result[i][j] = 0;
            for (int k = 0;k < c1;k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
