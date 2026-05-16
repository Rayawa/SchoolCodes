//6.4
#include <stdio.h>

int main() {
    int sorted_nums[11] = {1, 3, 5, 7, 9}; 
    int n = 5; 
    int num;
    printf("请输入要插入的数：");
    scanf("%d", &num);
    int insert_index = 0;
    while (insert_index < n && sorted_nums[insert_index] < num) {
        insert_index++;
    }
    
    for (int i = n; i > insert_index; i--) {
        sorted_nums[i] = sorted_nums[i - 1];
    }
    sorted_nums[insert_index] = num;
    n++;
    printf("插入后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", sorted_nums[i]);
    }
    printf("\n");
    return 0;
}
