//7.10
#include <stdio.h>
#include <string.h>
void findLongestWord(char *str) {
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;
    
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }
    
    printf("最长单词：%s\n", longest);
}

int main() {
    char str[100];
    printf("输入一行字符：");
    getchar(); 
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    findLongestWord(str);
    return 0;
}
