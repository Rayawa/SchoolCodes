//7.17
#include <stdio.h>
void intToStr(int n, char str[], int *idx) {
    if (n / 10 != 0) {
        intToStr(n / 10, str, idx); 
    }
    str[(*idx)++] = n % 10 + '0'; 
}

int main() {
    int num;
    char str[20];
    int idx = 0;
    
    printf("输入一个整数：");
    scanf("%d", &num);
    
    if (num < 0) { 
        str[idx++] = '-';
        num = -num;
    } else if (num == 0) {
        str[idx++] = '0';
    }
    
    intToStr(num, str, &idx);
    str[idx] = '\0'; 
    
    printf("转换后的字符串：%s\n", str);
    return 0;
}
