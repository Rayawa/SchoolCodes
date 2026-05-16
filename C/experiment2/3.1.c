#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    int letter = 0, space = 0, digit = 0, other = 0;
    int i = 0;
    printf("请输入一行字符：");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            letter++;
        }
        else if (str[i] == ' ') {
            space++;
        }
        // �ж��Ƿ�Ϊ����
        else if (isdigit(str[i])) {
            digit++;
        }
        else {
            other++;
        }
        i++;
    }
    printf("英文字母个数：%d\n", letter);
    printf("空格个数：%d\n", space);
    printf("数字个数：%d\n", digit);
    printf("其他字符个数：%d\n", other);

    return 0;
}