#include <stdio.h>
#define SIZE 5 

void findKthMin(int mat[SIZE][SIZE], int k, int *val, int *row, int *col) {
    int temp[SIZE*SIZE]; 
    int i, j, idx = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            temp[idx++] = mat[i][j];
        }
    }
    for (i = 0; i < SIZE*SIZE - 1; i++) {
        for (j = 0; j < SIZE*SIZE - 1 - i; j++) {
            if (temp[j] > temp[j+1]) {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    *val = temp[k];
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (mat[i][j] == *val) {
                *row = i;
                *col = j;
                
                mat[i][j] = -9999; 
                return;
            }
        }
    }
}
void findMax(int mat[SIZE][SIZE], int *val, int *row, int *col) {
    *val = mat[0][0];
    *row = 0;
    *col = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (mat[i][j] > *val) {
                *val = mat[i][j];
                *row = i;
                *col = j;
            }
        }
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void adjustMatrix(int mat[SIZE][SIZE]) {
    int max_val, max_row, max_col;
    int min1_val, min1_row, min1_col; // 第1小（左上）
    int min2_val, min2_row, min2_col; // 第2小（右上）
    int min3_val, min3_row, min3_col; // 第3小（右下）
    int min4_val, min4_row, min4_col; // 第4小（左下）
    int center_row = SIZE/2, center_col = SIZE/2; // 中心位置（2,2）
    findMax(mat, &max_val, &max_row, &max_col);
    swap(&mat[max_row][max_col], &mat[center_row][center_col]);
    int temp_mat[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            temp_mat[i][j] = mat[i][j];
        }
    }
    // 第1小 → 左上（0,0）
    findKthMin(temp_mat, 0, &min1_val, &min1_row, &min1_col);
    swap(&mat[0][0], &mat[min1_row][min1_col]);
    // 第2小 → 右上（0,4）
    findKthMin(temp_mat, 1, &min2_val, &min2_row, &min2_col);
    swap(&mat[0][4], &mat[min2_row][min2_col]);
    // 第3小 → 右下（4,4）
    findKthMin(temp_mat, 2, &min3_val, &min3_row, &min3_col);
    swap(&mat[4][4], &mat[min3_row][min3_col]);
    // 第4小 → 左下（4,0）
    findKthMin(temp_mat, 3, &min4_val, &min4_row, &min4_col);
    swap(&mat[4][0], &mat[min4_row][min4_col]);
}

int main() {
    int matrix[SIZE][SIZE];
    int i, j;
    printf("请输入5×5矩阵的25个元素（按行输入，空格分隔）：\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    adjustMatrix(matrix);
    printf("\n调整后的5×5矩阵：\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n");
    }

    return 0;
}