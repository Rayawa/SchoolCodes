//6.10
#include <stdio.h>
#define ROW 3
#define COL 80

int main() {
  
    char text[ROW][COL];
    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;
    

    printf("请输入3行文本\n");
    for (int i = 0; i < ROW; i++) {
        fgets(text[i], COL, stdin); 
    }
    
   
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; text[i][j] != '\0'; j++) {
            if (text[i][j] >= 'A' && text[i][j] <= 'Z') {
                upper++;
            } else if (text[i][j] >= 'a' && text[i][j] <= 'z') {
                lower++;
            } else if (text[i][j] >= '0' && text[i][j] <= '9') {
                digit++;
            } else if (text[i][j] == ' ') {
                space++;
            } else if (text[i][j] != '\n') {  
                other++;
            }
        }
    }
    
    printf("大写字母的个数：%d\n", upper);
    printf("小写字母的个数：%d\n", lower);
    printf("数字个数：%d\n", digit);
    printf("空格个数：%d\n", space);
    printf("其他字符个数：%d\n", other);
    
    return 0;
}
