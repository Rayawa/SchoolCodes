#include <stdio.h>

int main() {
    int a, b, c, d;
    int temp;
    printf("请输入4个整数：");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        temp = a;
        a = d;
        d = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        temp = b;
        b = d;
        d = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }
    printf("按从小到大的顺序输出：%d %d %d %d\n", a, b, c, d);

    return 0;
}

