// 6.4 二维数组的行列互换
// 将3x5的数组，进行转置操作
// 实现：
// 1-定义两个二维数组a:3x5和b:5x3
// 2-数组a的1行，放到数组b的1列
// 学习：
// 1-二维数组的初始化；
// 2-二维数组元素的遍历

#include <stdio.h>
#include <stdlib.h>
#define ROW 30
#define COL 20
int main()
{
	int a[ROW][COL]={0},b[COL][ROW]={0};
	//1-assign rand value
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			a[i][j] = rand()%200-100;
			printf("%8d",a[i][j]);
		}
		printf("\n");
	}
	//2-tranpose matrix
	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++)
			b[j][i]=a[i][j];
	//3-print result
	printf("==========================================\n");
	for(int i=0;i<COL;i++)
	{
		for(int j=0;j<ROW;j++)
		{
			printf("%8d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
