#include <stdio.h>

#define MAX_LEN 100 

void reverseArray(int arr[], int len) {
    int i, temp;
    for (i = 0; i < len / 2; i++) {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

int main() {
    int n, i;
    int nums[MAX_LEN];

    printf("请输入要处理的数字个数");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_LEN) {
        printf("n需要在1~100֮之间\n");
        return 1;
    }

    printf("请输入%d个整数\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    reverseArray(nums, n);

    printf("逆序结果：");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
