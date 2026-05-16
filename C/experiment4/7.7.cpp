//7.7
#include <stdio.h>
#include <string.h>

void copyVowel(char *src, char *dest) {
    int j = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] == 'a' || src[i] == 'e' || src[i] == 'i' || src[i] == 'o' || src[i] == 'u' ||
            src[i] == 'A' || src[i] == 'E' || src[i] == 'I' || src[i] == 'O' || src[i] == 'U') {
            dest[j++] = src[i];
        }
    }
    dest[j] = '\0'; 
}
int main() {
    char str[100], vowelStr[100];
    printf("输入一个字符串：");
    scanf("%s", str);

    copyVowel(str, vowelStr);
    printf("元音字母：%s\n", vowelStr);
    return 0;
}
