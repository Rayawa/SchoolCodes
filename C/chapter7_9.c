// 7.9 数组作为形参: 求数组的平均值
// 1-用数组定义形参，[]内的数字无效
// 2-数组名作为实参，调用函数
// 注意：数组名就是指针

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double average(int x[],int num)	// 需要知道数组长度
{
//	if(num<=0)		// 判断输入是否合法
//		return 0; 
	double sum=0;
	for(int i=0;i<num;i++)
		sum+=x[i];
	return sum/num;
}

int main()
{
	int a[10];
	srand((unsigned int)time(NULL));	//给rand种子
	// 1-随机赋值
	for(int i=0;i<10;i++)
	{
		a[i] = rand()%77;
		printf("%4d", a[i]);
	}
	// 2-调用函数
	printf("\naverage =%6.2f\n",average(a,10));
	return 0;
}