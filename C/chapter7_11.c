// 7.11 生成3x4矩阵，求最大值
// 使用函数完成功能
// 1. 使用函数完成矩阵赋值
// 2. 求矩阵的最大值

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandMtx(int [][4], int);
int FindMax(int [][4], int);
int main()
{
	int array[3][4]={0};
	int maximum;
	RandMtx(array, 3);
	maximum = FindMax(array, 3);
	printf("maximum is %d\n", maximum);
	
	return 0;
}

int FindMax(int a[][4], int row)
{
	int m=-1;	// 最大值初始化时，赋最小的值
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<4;j++)
		{
			m = a[i][j]>m ? a[i][j] : m;
		}
	}
	return m;
}

void RandMtx(int a[][4], int row)
{
	srand((unsigned int)time(NULL));
	printf("random matrix:\n");
	for(int i=0; i<row;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=rand()%200;
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
}