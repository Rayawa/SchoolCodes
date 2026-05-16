//7.11
#include <stdio.h>

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char ch[10];
    printf("输入10个字符");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &ch[i]);
    }
    
    bubbleSort(ch, 10);
    printf("排序后：");
    for (int i= 0; i < 10; i++) {
        printf("%c ", ch[i]);
    }
    printf("\n");
    return 0;
}
