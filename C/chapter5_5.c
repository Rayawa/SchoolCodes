// 第5章例题5
// 输出4x5的矩阵
// 规律：第1行是1~5；第2、3、4行是第1行的倍数

#include <stdio.h>
int main()
{
	for(int row=1;row<=4;row++)	
	{
		for(int col=1;col<=5;col++)
		{
			// 思考：分别使用break和continue跳过第3行第2列
			printf("%8d", row*col);
		}
		printf("\n");
	}
	return 0;
}