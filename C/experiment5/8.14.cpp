#include <stdio.h>
#define STUDENT_NUM 4  
#define COURSE_NUM 5  

float calcFirstCourseAvg(int scores[STUDENT_NUM][COURSE_NUM]) {
    int sum = 0;
    for (int i = 0; i < STUDENT_NUM; i++) {
        sum += scores[i][0];
    }
    return (float)sum / STUDENT_NUM;
}

void findFailedStudents(int ids[], int scores[STUDENT_NUM][COURSE_NUM]) {
    printf("\n=== 两门及以上课程不及格的学生 ===\n");
    int hasFailed = 0; 
    for (int i = 0; i < STUDENT_NUM; i++) {
        int failCount = 0; 
        float avgScore = 0.0; 

        for (int j = 0; j < COURSE_NUM; j++) {
            avgScore += scores[i][j];
            if (scores[i][j] < 60) {
                failCount++;
            }
        }
        avgScore /= COURSE_NUM; 
        
        if (failCount >= 2) {
            hasFailed = 1;
            printf("学号：%d\n", ids[i]);
            printf("全部课程成绩：");
            for (int j = 0; j < COURSE_NUM; j++) {
                printf("%d ", scores[i][j]);
            }
            printf("\n平均成绩：%.2f\n\n", avgScore);
        }
    }
    if (!hasFailed) {
        printf("无两门及以上课程不及格的学生\n\n");
    }
}
void findExcellentStudents(int ids[], int scores[STUDENT_NUM][COURSE_NUM]) {
    printf("=== 优秀学生（平均分≥90 或 全部课程≥85）===\n");
    int hasExcellent = 0; 
    for (int i = 0; i < STUDENT_NUM; i++) {
        float avgScore = 0.0;
        int allAbove85 = 1; 
        
        for (int j = 0; j < COURSE_NUM; j++) {
            avgScore += scores[i][j];
            if (scores[i][j] < 85) {
                allAbove85 = 0; 
            }
        }
        avgScore /= COURSE_NUM;
        
        
        if (avgScore >= 90 || allAbove85) {
            hasExcellent = 1;
            printf("学号：%d\n", ids[i]);
            printf("全部课程成绩：");
            for (int j = 0; j < COURSE_NUM; j++) {
                printf("%d ", scores[i][j]);
            }
            printf("\n平均成绩：%.2f\n\n", avgScore);
        }
    }
    if (!hasExcellent) {
        printf("无优秀学生\n\n");
    }
}

int main() {
    int studentIds[STUDENT_NUM] = {0};
    int studentScores[STUDENT_NUM][COURSE_NUM] = {0};
    printf("===== 输入4名学生的信息 =====\n");
    printf("格式：学号 成绩1 成绩2 成绩3 成绩4 成绩5（空格分隔）\n");
    for (int i = 0; i < STUDENT_NUM; i++) {
        printf("请输入第%d名学生：", i + 1);
        scanf("%d %d %d %d %d %d", 
              &studentIds[i], 
              &studentScores[i][0], &studentScores[i][1],
              &studentScores[i][2], &studentScores[i][3],
              &studentScores[i][4]);
    }
    float firstAvg = calcFirstCourseAvg(studentScores);
    printf("\n第一门课程的平均分：%.2f\n", firstAvg);
    
    findFailedStudents(studentIds, studentScores);

    findExcellentStudents(studentIds, studentScores);
    
    return 0;
}
