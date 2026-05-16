// 例题6.2 用数组求解Fibonacci数列
// 1-前两个数是1，1
// 2-第3个开始，每个都是前两个数之和

// 学习：如何给数组赋初值

#include <stdio.h>
#define  NUM 50
int main()
{
	unsigned int fib[NUM]={1,1};	//各个元素初值是多少？
	
	for(int i=2;i<NUM;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(int i=0;i<NUM;i++)
	{
		printf("%15d ",fib[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	// 思考：输出为何有负数？如何修改？
	return 0;
}