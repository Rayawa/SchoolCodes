//7.1
#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("输入两个整数：");
    scanf("%d %d", &num1, &num2);
    
    int g = gcd(num1, num2);
    int l = lcm(num1, num2);
    
    printf("最大公约数：%d\n", g);
    printf("最小公倍数：%d\n", l);
    return 0;
}
