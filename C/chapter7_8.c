// 7.8 找数组中最大值和序号
// 1-如何生成·真·随机数
// 2-数组元素作为实参
// 思考：和教材里代码的区别？

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int greater(int a,int b)	
{
	return a>b? 1 : 0 ;	// 返回逻辑值
}
int main()
{
	int a[10];
	int mx=0, pos=0;
	srand((unsigned int)time(NULL)); // seed rand，给rand种子
	// 1-生成·真·随机数
	for(int i=0;i<10;i++)
	{
		a[i]=rand()%1000;
		printf("%d,",a[i]);
	}
	// 2-数组元素作为实参，调用max
	for(int i=0;i<10;i++)
	{
		if(greater(a[i],mx))
		{
			mx=a[i]; pos=i;
		}
	}
	printf("\nmax number is %d, position is %d.\n", mx,pos);
	return 0;
}