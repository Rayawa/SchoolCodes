#include <stdio.h>
#include <math.h> 
int main() {
    double principal = 1000;
    double rate_1year = 0.015;
    double rate_2year = 0.021;
    double rate_3year = 0.0275;
    double rate_5year = 0.03;
    double rate_current = 0.0035;
    double result1 = principal * (1 + 5 * rate_5year);
    double result2_step1 = principal * (1 + 2 * rate_2year);
    double result2 = result2_step1 * (1 + 3 * rate_3year);
    double result3_step1 = principal * (1 + 3 * rate_3year);
    double result3 = result3_step1 * (1 + 2 * rate_2year);
    double result4 = principal * pow(1 + rate_1year, 5);
    double result5 = principal * pow(1 + rate_current / 4, 5 * 4);
    printf("（1）一次存5年期：%.2f\n", result1);
    printf("（2）先存2年期，再存3年期：%.2f\n", result2);
    printf("（3）先存3年期，再存2年期：%.2f\n", result3);
    printf("（4）连续存5次1年期：%.2f\n", result4);
    printf("（5）存活期存款：%.2f\n", result5);

    return 0;
}
