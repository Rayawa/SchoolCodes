// 例题6.3 
// 对10个整数，按增序排序
// 1-如何得到10个整数？---随机数
// 2-如何排序？-- 起泡法: 相邻比大小，前>后=交换

// 学习：使用嵌套循环，完成气泡排序
//  1-第1轮起泡，最大值到最后
//  2-第2轮起泡，最大值到倒数第2位....

// 学习，使用debug调试，看变量的中间结果

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array[10]={0};
	int swap;
	for(int i=0;i<10;i++)
	{
		array[i]=rand()%100; // 为何要加 %100 ？
		printf("%d,",array[i]);
	}
	printf("\n增序排序结果：\n");

	for(int n=0;n<4;n++)
	{
		for(int i=0;i<10-n-1;i++)
		{
			if(array[i]>array[i+1])	// swap
			{
				swap=array[i];
				array[i]=array[i+1];
				array[i+1]=swap;
			}
		}		
	}

	for(int i=0;i<10;i++)
	{
		printf("%d,",array[i]);
	}
	return 0;
}