#include <stdio.h>

int main() {
    int scores[5]; // 5명의 학생 점수를 저장할 배열
    int sum = 0;
    float average;
    int max, min;
    
    // 사용자로부터 5명 학생의 점수 입력 받기
    printf("5명 학생의 점수를 입력하세요. -----\n");
    for(int i = 0; i < 5; i++) {
        printf("학생 %d의 점수: ", i+1);
        scanf("%d", &scores[i]);
        
        // 입력 검증
        if(scores[i] < 0 || scores[i] > 100) {
            printf("0에서 100 사이의 점수를 입력하세요!\n");
            i--; // 다시 입력받기 위해 인덱스 감소
            continue;
        }
        
        sum += scores[i]; // 합계 계산
    }
    
    // 평균 계산
    average = (float)sum / 5;
    
    // 최고 점수와 최저 점수 찾기
    max = scores[0];
    min = scores[0];
    
    for(int i = 1; i < 5; i++) {
        if(scores[i] > max) {
            max = scores[i];
        }
        if(scores[i] < min) {
            min = scores[i];
        }
    }
    
    // 결과 출력
    printf("\n=== 결과 ===\n");
    printf("총점: %d\n", sum);
    printf("평균: %.2f\n", average);
    
    // 각 학생의 점수와 등급 출력
    printf("\n=== 각 학생의 점수와 등급 ===\n");
    for(int i = 0; i < 5; i++) {
        printf("학생 %d: %d점, 등급: ", i+1, scores[i]);
        
        // 등급 결정
        if(scores[i] >= 90) {
            printf("A\n");
        } else if(scores[i] >= 80) {
            printf("B\n");
        } else if(scores[i] >= 70) {
            printf("C\n");
        } else if(scores[i] >= 60) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }
    
    printf("\n최고 점수: %d\n", max);
    printf("최저 점수: %d\n", min);
    
    return 0;
}