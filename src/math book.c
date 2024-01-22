#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 시작 시간을 저장할 전역 변수
time_t startTime;

// 프로그램 시작 저장할 전역 변수
void startTimer() {
    startTime = time(NULL);
}

// 현재까지 경과한 시간을 초 단위로 변환하는 함수
double getElapsedTimeInSeconds() {
    time_t currentTime = time(NULL);
    double elapsed = difftime(currentTime, startTime);
    return elapsed;
}

// 문제 코드
enum ProblemCode {
    CONCEPTUAL = 1,
    DESCRIPTIVE = 2,
    APPLICATION = 3
};

// 문제와 정답 데이터 구조체
struct ProblemData {
    char problemText[100]; // 문제 문자열
    int answer; // 정답
};

// 문제 데이터 배열
struct ProblemData problems[3][3]; // 3개의 코드 별로 각각 3개의 문제 저장

// 문제 데이터 초기화 함수
void initializeProblems() {
    // 코드 1 (CONCEPTUAL)에 대한 문제와 정답 초기화
    strcpy(problems[CONCEPTUAL - 1][0].problemText, "2 * 3 = ?");
    problems[CONCEPTUAL - 1][0].answer = 6;
    strcpy(problems[CONCEPTUAL - 1][1].problemText, "4 * 5 = ?");
    problems[CONCEPTUAL - 1][1].answer = 20;
    strcpy(problems[CONCEPTUAL - 1][2].problemText, "6 * 7 = ?");
    problems[CONCEPTUAL - 1][2].answer = 42;

    // 코드 2 (DESCRIPTIVE)에 대한 문제와 정답 초기화
    strcpy(problems[DESCRIPTIVE - 1][0].problemText, "8 * 4 = ?");
    problems[DESCRIPTIVE - 1][0].answer = 32;
 
    strcpy(problems[DESCRIPTIVE - 1][1].problemText, "9 * 7 = ?");
    problems[DESCRIPTIVE - 1][1].answer = 63;
    strcpy(problems[DESCRIPTIVE - 1][2].problemText, "5 * 6 = ?");
    problems[DESCRIPTIVE - 1][2].answer = 30;

    // 코드 3 (APPLICATION)에 대한 문제와 정답 초기화
    strcpy(problems[APPLICATION - 1][0].problemText, "7 * 8 = ?");
    problems[APPLICATION - 1][0].answer = 56;
    strcpy(problems[APPLICATION - 1][1].problemText, "3 * 9 = ?");
    problems[APPLICATION - 1][1].answer = 27;
    strcpy(problems[APPLICATION - 1][2].problemText, "2 * 4 = ?");
    problems[APPLICATION - 1][2].answer = 8;
}

// 문제 출력 함수
void printProblem(char* problemText) {
    printf("문제: %s\n", problemText);
}

// 정답 체크 함수
int checkAnswer(int userAnswer, int answer) {
    // 정답 채점
    if (userAnswer == answer) {
        printf("정답입니다!\n");
        return 1; // 정답인 경우 1 반환
    } else {
        printf("틀렸습니다. 정답은 %d 입니다.\n", answer);
        return 0; // 오답인 경우 0 반환
    }
}

// 메인 함수
int main() {
    // 시작 시간을 설정
    startTimer();

    // 문제 데이터 초기화
    initializeProblems();

    int MAX_PROBLEMS = 3; // 최대 풀 문제 수 (각 코드 별로 3개씩)
    int problemsSolved = 0; // 푼 문제 수
    int showMessage = 1; // 메시지 출력 여부를 나타내는 플래그

    int totalProblems = 0; // 총 푼 문제 수
    int correctCounts[3] = {0}; // 문제 코드 별로 맞은 개수 저장
    int totalCounts[3] = {0}; // 문제 코드 별로 푼 개수 저장

    while (problemsSolved < MAX_PROBLEMS * 3) {
        // 랜덤으로 코드 선택
        int code = rand() % 3 + 1;

        // 해당 코드에 따라 랜덤하게 문제 선택
        int randomIndex = rand() % 3; // 최대 3개의 문제
        struct ProblemData problem = problems[code - 1][randomIndex];

        int userAnswer;

        // 문제 출력
        printProblem(problem.problemText);

        // 사용자 응답 받기
        printf("정답을 입력하세요 (-1로 종료): ");
        scanf("%d", &userAnswer);

        if (userAnswer == -1) {
            break; // -1을 입력하면 프로그램 종료
        }

        // 정답 채점
        int isCorrect = checkAnswer(userAnswer, problem.answer);

        problemsSolved++;

        // 정답 여부를 문제 코드 별로 저장
        if (userAnswer == problem.answer) {
            correctCounts[code - 1]++;
        }
        totalCounts[code - 1]++;

        if (showMessage && getElapsedTimeInSeconds() < 0.5) {
            printf("찍었나요? 집중력이 흐트러졌다면 단 것을 섭취해봐요!\n");
            showMessage = 0; // 메시지를 한 번만 출력하도록 플래그 변경
        }

        if (!isCorrect) {
            printf("약한 부분에 대한 문제를 다시 풀겠습니까? (yes/no): ");
            char response[10];
            scanf("%s", response);
            if (strcmp(response, "yes") == 0) {
                // 약한 부분에 대한 문제를 다시 푸는 로직을 여기에 추가
                printf("약한 부분에 대한 문제를 다시 풉니다.\n");
                int weakCode = code; // 약한 부분 코드
                int randomIndex = rand() % 3; // 약한 부분의 랜덤 문제 선택
                struct ProblemData weakProblem = problems[weakCode - 1][randomIndex];
                int userAnswer;

                // 문제 출력
                printProblem(weakProblem.problemText);

                // 사용자 응답 받기
                printf("정답을 입력하세요 (-1로 종료): ");
                scanf("%d", &userAnswer);

                if (userAnswer == -1) {
                    break; // -1을 입력하면 프로그램 종료
                }

                // 정답 채점
                int isWeakCorrect = checkAnswer(userAnswer, weakProblem.answer);

                // 약한 부분 문제에 대한 통계 업데이트
                if (isWeakCorrect) {
                    correctCounts[weakCode - 1]++;
                }
                totalCounts[weakCode - 1]++;

                printf("약한 부분 문제를 다시 풀었습니다.\n");
            }
        }
    }

    // 문제 코드 별로 통계 출력
    for (int i = 0; i < 3; i++) {
        int code = i + 1;
        int correctCount = correctCounts[i];
        int totalCount = totalCounts[i];

        printf("문제 코드: %d\n", code);
        printf("맞은 개수: %d\n", correctCount);
        printf("푼 개수: %d\n", totalCount);

        if (totalCount > 0) {
            double accuracy = (double)correctCount / totalCount * 100;
            printf("정확도: %.2f%%\n", accuracy);

            if (accuracy < 50) {
                printf("약하다\n");
                printf("약한 부분 문제를 다시 푼 횟수: %d\n", totalCount - correctCount);
            } else {
                printf("강하다\n");
            }
        }
        printf("\n");

        totalProblems += totalCount;
    }

    // 현재까지 경과한 시간을 출력
    printf("경과 시간: %.2lf 초\n", getElapsedTimeInSeconds());
    printf("총 풀이한 문제 수: %d\n", totalProblems);

    return 0;
}
