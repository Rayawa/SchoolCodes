//8.2
#include <stdio.h>
#include <string.h>  
int main() {
    char str1[30], str2[30], str3[30], temp[30];
    printf("请输入3个字符串：");
    scanf("%s %s %s", str1, str2, str3); 
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str1, str3) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    printf("按字典序从小到大排序：%s, %s, %s\n", str1, str2, str3);

    return 0;
}
