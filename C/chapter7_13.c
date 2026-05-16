// 7.13 全局变量求平均分、最高、最低分
// 1. 函数return返回1个变量，现在有3个
// 2. 使用全局变量

#include <stdio.h>

double max=-1,min=10e5,avg=0;	// 全局变量
void compute(int[], int);
int main()
{
	int score[10]={90,80,70,60,91,82,73,64,95,65};
	compute(score, 10);
	printf("max=%4.2f,min=%4.2f,mean=%4.2f",max,min,avg);
	return 0;
}

void compute(int a[], int n)
{
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum += a[i];
		max = a[i]>max ? a[i] : max;
		min = a[i]<min ? a[i] : min;
	}
	avg = sum/10;
}