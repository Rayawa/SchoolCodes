#include <stdio.h>
#include <math.h>

int main() {
    double a, x0, x1, eps = 1e-6;
    printf("请输入被开方数a：");
    scanf("%lf", &a);
    x0 = a / 2;
    do {
        x1 = 0.5 * (x0 + a / x0);
        if (fabs(x1 - x0) < eps) {
            break;
        }
        x0 = x1;
    } while (1);

    printf("%.6lf的平方根是%.6lf\n", a, x1);

    return 0;
}