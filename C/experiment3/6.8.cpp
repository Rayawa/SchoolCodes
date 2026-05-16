//6.8
#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
    int arr[ROW][COL] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int i, j, k, rowMax, colMin, hasSaddle = 0;
   
    for (i = 0; i < ROW; i++) {
        rowMax = arr[i][0];
        int colIndex = 0;
       
        for (j = 1; j < COL; j++) {
            if (arr[i][j] > rowMax) {
                rowMax = arr[i][j];
                colIndex = j;
            }
        }
        colMin = arr[0][colIndex];
      
        for (k = 1; k < ROW; k++) {
            if (arr[k][colIndex] < colMin) {
                colMin = arr[k][colIndex];
            }
        }
        if (rowMax == colMin) {
            printf("鞍点为：arr[%d][%d] = %d\n", i, colIndex, rowMax);
            hasSaddle = 1;
        }
    }
    if (!hasSaddle) {
        printf("没有鞍点\n");
    }
    return 0;
}
