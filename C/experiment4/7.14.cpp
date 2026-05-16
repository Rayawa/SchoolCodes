//7.14
#include <stdio.h>
#define STUDENT 10
#define COURSE 5
void stuAvg(float score[STUDENT][COURSE], float stuAvgArr[]) {
    for (int i = 0; i < STUDENT; i++) {
        float sum = 0;
        for (int j = 0; j < COURSE; j++) {
            sum += score[i][j];
        }
        stuAvgArr[i] = sum / COURSE;
    }
}
void courseAvg(float score[STUDENT][COURSE], float courseAvgArr[]) {
    for (int j = 0; j < COURSE; j++) {
        float sum = 0;
        for (int i = 0; i < STUDENT; i++) {
            sum += score[i][j];
        }
        courseAvgArr[j] = sum / STUDENT;
    }
}
void findMax(float score[STUDENT][COURSE], int *stuIdx, int *courseIdx) {
    float max = score[0][0];
    *stuIdx = 0;
    *courseIdx = 0;
    for (int i = 0; i < STUDENT; i++) {
        for (int j = 0; j < COURSE; j++) {
            if (score[i][j] > max) {
                max = score[i][j];
                *stuIdx = i;
                *courseIdx = j;
            }
        }
    }
}
float variance(float stuAvgArr[]) {
    float sum = 0, avg = 0, var = 0;
    for (int i = 0; i < STUDENT; i++) {
        sum += stuAvgArr[i];
    }
    avg = sum / STUDENT;
    for (int i = 0; i < STUDENT; i++) {
        var += (stuAvgArr[i] - avg) * (stuAvgArr[i] - avg);
    }
    return var / STUDENT;
}

int main() {
    float score[STUDENT][COURSE];
    float stuAvgArr[STUDENT], courseAvgArr[COURSE];
    int maxStu, maxCourse;
    
    printf("输入10个学生5门课的成绩：\n");
    for (int i = 0; i < STUDENT; i++) {
        for (int j = 0; j < COURSE; j++) {
            scanf("%f", &score[i][j]);
        }
    }

    stuAvg(score, stuAvgArr);
    courseAvg(score, courseAvgArr);
    findMax(score, &maxStu, &maxCourse);
    float var = variance(stuAvgArr);
  
    printf("每个学生平均分：");
    for (int i = 0; i < STUDENT; i++) printf("%.2f ", stuAvgArr[i]);
    printf("\n每门课平均分：");
    for (int j = 0; j < COURSE; j++) printf("%.2f ", courseAvgArr[j]);
    printf("\n最高分：学生%d 课程%d，分数：%.2f\n", maxStu+1, maxCourse+1, score[maxStu][maxCourse]);
    printf("平均分方差：%.2f\n", var);
    
    return 0;
}