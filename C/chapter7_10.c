// 7.10 选择法排序，使用函数
// 1-随机数赋值，使用函数，数组作为形参
// 2-选择法排序，使用函数，数组为形参
// 3-选择法：第1个元素和后面所有元素打擂台，打完最小；
//           第2元素打擂台，第3个...，第n-1个和n打擂台
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10
void initialize(int [],int);
void sort(int [], int);

int main()
{
	int array[NUM];
	initialize(array,NUM);
	sort(array,NUM);
	puts("result of sorting:");
	for(int i=0;i<NUM;i++)
	{
		printf("%5d",array[i]);
	}
	return 0;
}
// 1-对数组初始化赋值
void initialize(int a[], int num)
{
	srand((unsigned int)time(0));
	for(int i=0;i<num;i++)
	{
		a[i] = rand()%200;
		printf("%5d",a[i]);
	}
	printf("\n");
}
// 2-选择法排序
void sort(int a[], int num)
{
	int swap;
	for(int n=0;n<num-2;n++)
	{
		for(int i=n+1;i<num;i++)
		{
			if(a[n]>a[i])
			{
				swap=a[n];a[n]=a[i];a[i]=swap;
			}
		}		
	}
}
