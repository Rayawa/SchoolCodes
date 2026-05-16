//7.3
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int num;
    printf("输入一个整数：");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d 是素数\n", num);
    } else {
        printf("%d 不是素数\n", num);
    }
    return 0;
}
