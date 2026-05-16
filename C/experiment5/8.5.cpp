#include <stdio.h>

int findLastPerson(int n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int count = 0;   
    int index = 0;   
    int remain = n;  

    while (remain > 1) {
        if (arr[index] != 0) {
            count++; 
            if (count == 3) {
                arr[index] = 0; 
                remain--;
                count = 0;       
            }
        }
        index = (index + 1) % n;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            return arr[i];
        }
    }
    return -1; 
}
int main() {
    int n;
    printf("请输入围成一圈的人数：");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n必须为正整数！\n");
        return 1;
    }

    int last = findLastPerson(n);
    printf("最后留下来的是%号的人\n", last);

    return 0;
}
