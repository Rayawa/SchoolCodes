//6.2 
#include <stdio.h>

int main() {
    int nums[10] = {5, 3, 8, 6, 7, 2, 9, 1, 4, 0};
    int n = 10;
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = temp;
    }
    printf("排序后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
