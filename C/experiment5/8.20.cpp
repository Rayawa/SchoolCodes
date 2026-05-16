#include <stdio.h>
#include <string.h>

#define MAX_STR_NUM 100
#define MAX_STR_LEN 100

void sortStrings(char **strPtr, int n) {
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(strPtr[j], strPtr[j+1]) > 0) {
                temp = strPtr[j];
                strPtr[j] = strPtr[j+1];
                strPtr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    char strs[MAX_STR_NUM][MAX_STR_LEN];
    char *strPtrs[MAX_STR_NUM];           

    printf("请输入字符串个数：");
    scanf("%d", &n);
    printf("请输入%d个字符串：\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
        strPtrs[i] = strs[i];  
    }

    sortStrings(strPtrs, n);

    printf("\n排序后：\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strPtrs[i]);
    }

    return 0;
}
