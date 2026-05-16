//6.5
#include <stdio.h>
int strLenByPtr(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;       
        str++;       
    }
    return len;
}

int strLenByArr(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;       
    }
    return len;
}

int main() {
    char inputStr[100];
    printf("请输入一个字符串：");
    fgets(inputStr, 100, stdin);

    int i = 0;
    while (inputStr[i] != '\0') {
        if (inputStr[i] == '\n') {
            inputStr[i] = '\0';
            break;
        }
        i++;
    }

    int len1 = strLenByPtr(inputStr);  
    int len2 = strLenByArr(inputStr);  
    
    printf("【形参为指针】字符串长度：%d\n", len1);
    printf("【形参为数组名】字符串长度：%d\n", len2);

    return 0;
}
