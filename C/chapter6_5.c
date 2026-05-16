// 6.5 在3x4矩阵中找出最大值
// 打擂台算法，用于排序时，称为选择排序法
// 思考：是否可以只用一个循环完成？ Yes

#include <stdio.h>
#include <stdlib.h>
#define ROW 10
#define COL 10
int main()
{
	int a[ROW][COL]={0};
	int mx=0, row=0, col=0;
	
	//1. initialization
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			a[i][j]=rand();
			printf("%8d",a[i][j]);
		}
		printf("\n");
	}
	//2. find max value
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			if(a[i][j]>mx)
			{
				row=i,col=j;
				mx=a[i][j];
			}
		}
	}
	printf("max value is %d, row:%d,col:%d\n",mx,row,col);	
	return 0;
}