#include <stdio.h>

#define MAX_STUDENTS 10  // 최대 학생수는 10명
#define MAX_SUBJECTS 5   // 최대 과목수는 5

/**
 * 입력 예제
 * 
 * 학생 수를 입력하세요: 2
 * 학생 1의 성적 (5 과목): 100 090 050 040 070
 * 학생 2의 성적 (5 과목): 040 080 100 020 040
 * 
 * 과목별 평균 점수:
 * 과목 1: 평균 = 70.00, 최고점수 = 100.00
 * 과목 2: 평균 = 85.00, 최고점수 = 90.00
 * 과목 3: 평균 = 75.00, 최고점수 = 100.00
 * 과목 4: 평균 = 30.00, 최고점수 = 40.00
 * 과목 5: 평균 = 55.00, 최고점수 = 70.00
 * 
 * 학생별 평균 점수:
 * 학생 1: 평균 = 70.00
 * 학생 2: 평균 = 56.00
 * 
 */

/**
 * @brief 과목별 평균을 계산하는 함수
 *
 * @param scores 학생-과목별 점수 목록
 * @param numStudents 학생 수
 * @param subjectAverage 과목별 평균 점수

 */
void calculateSubjectAverage(double scores[][MAX_SUBJECTS], int numStudents, double subjectAverage[]);

/**
 * @brief 과목별 최고 점수를 계산하는 함수
 * 
 * @param scores 학생-과목별 점수 목록
 * @param numStudents 학생 수
 * @param subjectHighest 과목별 최고 점수
 */
void findSubjectHighest(double scores[][MAX_SUBJECTS], int numStudents, double subjectHighest[]);

/**
 * @brief 학생별 평균 점수를 계산하는 함수
 * 
 * @param scores 학생-과목별 점수 목록
 * @param studentAverages 학생별 평균 점수
 * @param numStudents 학생 수
 */
void calculateStudentAverages(double scores[][MAX_SUBJECTS], double studentAverages[], int numStudents);

int main() {
    double scores[MAX_STUDENTS][MAX_SUBJECTS] = {0};
    double studentAverages[MAX_STUDENTS] = {0};
    double subjectAverage[MAX_SUBJECTS] = {0};
    double subjectHighest[MAX_SUBJECTS] = {0};
    int numStudents;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &numStudents);

    // 학생의 과목별 성적 입력 받기
    for (int i = 0; i < numStudents; i++) {
        printf("학생 %d의 성적 (5 과목): ", i + 1);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            scanf("%lf", &scores[i][j]);
        }
    }

    // 과목별 평균 및 최고점수 계산
    calculateSubjectAverage(scores, numStudents, subjectAverage);
    findSubjectHighest(scores, numStudents, subjectHighest);

    // 학생별 평균 점수 계산
    calculateStudentAverages(scores, studentAverages, numStudents);

    // 결과 출력
    printf("\n과목별 평균 점수:\n");
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        printf("과목 %d: 평균 = %.2f, 최고점수 = %.2f\n", j + 1, subjectAverage[j], subjectHighest[j]);
    }

    printf("\n학생별 평균 점수:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("학생 %d: 평균 = %.2f\n", i + 1, studentAverages[i]);
    }

    return 0;
}

void calculateSubjectAverage(double scores[][MAX_SUBJECTS], int numStudents, double subjectAverage[]) {
    
}

void findSubjectHighest(double scores[][MAX_SUBJECTS], int numStudents, double subjectHighest[]) {
    
}

void calculateStudentAverages(double scores[][MAX_SUBJECTS], double studentAverages[], int numStudents) {
    
}
