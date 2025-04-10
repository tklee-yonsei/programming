#include <stdio.h>

// 함수 선언
void inputScores(int scores[], int size);
float calculateAverage(int scores[], int size);
char getGrade(int score);
int findMax(int scores[], int size);
int findMin(int scores[], int size);
void printResults(int scores[], int size, float average, int min, int max);

int main() {
    int scores[5]; // 5명의 학생 점수를 저장할 배열
    int min, max;
    float average;
    
    // 점수 입력 받기
    inputScores(scores, 5);
    
    // 평균 계산
    average = calculateAverage(scores, 5);
    
    // 최고점과 최저점 찾기
    max = findMax(scores, 5);
    min = findMin(scores, 5);
    
    // 결과 출력
    printResults(scores, 5, average, min, max);
    
    return 0;
}

// 점수 입력 함수
void inputScores(int scores[], int size) {
    printf("5명 학생의 점수를 입력하세요. -----\n");
    for(int i = 0; i < size; i++) {
        printf("학생 %d의 점수: ", i+1);
        scanf("%d", &scores[i]);
        
        // 입력 검증
        if(scores[i] < 0 || scores[i] > 100) {
            printf("0에서 100 사이의 점수를 입력하세요!\n");
            i--; // 다시 입력받기 위해 인덱스 감소
        }
    }
}

// 평균 계산 함수
float calculateAverage(int scores[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return (float)sum / size;
}

// 점수에 따른 등급 결정 함수
char getGrade(int score) {
    if(score >= 90) return 'A';
    else if(score >= 80) return 'B';
    else if(score >= 70) return 'C';
    else if(score >= 60) return 'D';
    else return 'F';
}

// 최고점 찾는 함수
int findMax(int scores[], int size) {
    int max = scores[0];
    
    for(int i = 1; i < size; i++) {
        if(scores[i] > max) {
            max = scores[i];
        }
    }
    
    return max;
}

// 최저점 찾는 함수
int findMin(int scores[], int size) {
    int min = scores[0];
    
    for(int i = 1; i < size; i++) {
        if(scores[i] < min) {
            min = scores[i];
        }
    }
    
    return min;
}

// 결과 출력 함수
void printResults(int scores[], int size, float average, int min, int max) {
    printf("\n=== 결과 ===\n");
    printf("평균: %.2f\n", average);
    
    printf("\n===각 학생의 점수와 등급===\n");
    for(int i = 0; i < size; i++) {
        printf("학생 %d: %d점, 등급: %c\n", i+1, scores[i], getGrade(scores[i]));
    }
    
    printf("\n최고 점수: %d\n", max);
    printf("최저 점수: %d\n", min);
}