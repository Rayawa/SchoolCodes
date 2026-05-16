//8.9
#include <stdio.h>
void transpose(int *ptr) {
    int i, j, temp;
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            temp = *(ptr + i * 3 + j);          
            *(ptr + i * 3 + j) = *(ptr + j * 3 + i); 
            *(ptr + j * 3 + i) = temp;        
        }
    }
}

int main() {
    int arr[3][3];
    int i, j;
    printf("请输入3x3数组的9个元素：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    transpose(&arr[0][0]);

    printf("转置后的3x3数组：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
