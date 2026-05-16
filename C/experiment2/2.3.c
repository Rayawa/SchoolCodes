#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    char grade;
    if (score > 100 || score < 0) {
        printf("成绩输入错误，应在 0 - 100 之间\n");
    } else if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    if (score >= 0 && score <= 100) {
        printf("成绩等级为：%c\n", grade);
    }

    return 0;
}