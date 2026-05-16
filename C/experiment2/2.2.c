#include <stdio.h>
#include <math.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num <= 0 || num >= 1000) {
        printf("请重新输入\n");
    } else {
       
        int sqrt_int = (int)sqrt(num);
        printf("%d\n", sqrt_int);
    }
    return 0;
}